#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
//#include "Figura.hpp"
//#include "Texto.hpp"
#include <iostream>
#include <exception>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <chrono>
#include <fstream>

using namespace std;
using namespace cv;

class Texto
{
  private:
    Mat img;
    std::string text;

  public:
    void drawTexto(int x, int y);
    void setTexto(std::string);
    void setImg(Mat);
    Texto(string, Mat);
    Texto() {}
};

class Figura
{
  public:
    void drawFigura(Mat frame, Mat transp, double xPos, double yPos);
    Figura() {}
};

class Relogio
{
    std::chrono::steady_clock sc;
    std::chrono::steady_clock::time_point start;
    std::chrono::steady_clock::time_point end;

    int relogin;

    public:
        Relogio();
        int getTempoAtual();
        void zerarTempo();
        void atualizaTempo();
};



void detectAndDraw(Mat &img, CascadeClassifier &cascade, double scale);
void drawText(Mat &image, string text, int score, Point p);
void drawTransparency(Mat frame, Mat transp, double xPos, double yPos);
Mat ChangeFruit();

string cascadeName;
const char *title = "Jogo da Serpente";
Mat img_object = imread("thomasface.png", IMREAD_UNCHANGED);
Mat img_copy = imread("thomasface.png", IMREAD_UNCHANGED);
Mat img_rdm;
Mat img_espelhada;
double macax, macay;
int score = 0;
int relogin = 0;
std::chrono::steady_clock sc;
auto start = sc.now();

Texto texto_score;
Texto texto_relogin;

Figura fruta_1;

Relogio relogio;


int main(int argc, const char **argv)
{

    int select;
    int recorde;
    VideoCapture capture;
    Mat frame;
    CascadeClassifier cascade;
    double scale;
    cascadeName = "/usr/local/share/OpenCV/haarcascades/haarcascade_frontalface_alt.xml";
    scale = 1;
    srand(time(NULL));
    macax = rand() % (590 - 200) + 100;
    macay = rand() % (430 - 200) + 100;

    ifstream arq;
    arq.open("data.txt", ios::binary);
    arq.read((char *)&recorde, sizeof(recorde));
    arq.close();

    while (1)
    {

        cout << "\nMenu:" << endl
             << "1 - Jogar\n"
             << "2 - Recorde\n"
             << "3 - Sair\n" 
             << "4 - Zerar recorde\n";

        cin >> select;

        switch (select)
        {
        case 1:
            img_rdm = ChangeFruit(); // gera a primeira fruta aleatoriamente

            if (!cascade.load(cascadeName))
            {
                cerr << "ERROR: Could not load classifier cascade:\n " << cascadeName << endl;
                return -1;
            }

            try
            {
                const char *device = "/dev/video0";
                //const char * device = "rtsp://192.168.43.1:8080/h264_ulaw.sdp";
                if (!capture.open(device))
                    cout << "Capture from camera #0 didn't work" << endl;
            }
            catch (std::exception &e)
            {
                std::cout << " Excecao capturada open: " << e.what() << std::endl;
            }

            if (capture.isOpened())
            {
                cout << "Video capturing has been started ..." << endl;
                namedWindow(title, cv::WINDOW_NORMAL);
                for (;;)
                {
                    try
                    {
                        capture >> frame;
                    }
                    catch (cv::Exception &e)
                    {
                        std::cout << " Excecao2 capturada frame: " << e.what() << std::endl;
                        usleep(1000000);
                        continue;
                    }
                    catch (std::exception &e)
                    {
                        std::cout << " Excecao3 capturada frame: " << e.what() << std::endl;
                        usleep(1000000);
                        continue;
                    }

                    if (frame.empty())
                        break;

                    /*for (int m=0 ; m<400 ; m++) {Menu m1 = Menu();
                    //unsigned char * p = frame.ptr(m, m);
                    p[0] = 255;
                    p[1] = 0;
                    p[2] = 0;
                }*/

                    detectAndDraw(frame, cascade, scale);
                    if (relogio.getTempoAtual() > 60)
                    {

                        if (score > recorde)
                        {
                            cout << score << endl;
                            recorde = score;
                        }
                        // relogin = 0;
                        score = 0;
                        relogio.zerarTempo();
                        cvDestroyAllWindows();
                        //cvDestroyAllHumans();
                        break;
                    }

                    char c = (char)waitKey(10);
                    if (c == 27 || c == 'q' || c == 'Q')
                        break;
                }
            }
            break;

        case 2:
            cout << "RECORDE: " << recorde << endl;
            break;

        case 3:{
            ofstream arq;
            arq.open("data.txt", ios::binary);
            //cout << recorde << endl;
            arq.write((char *)&recorde, sizeof(recorde));
            arq.close();
            return 0;
            break;}

        case 4:{
            ofstream arq2;
            recorde = 0;
            arq2.open("data.txt", ios::binary);
            arq2.write((char *)&recorde, sizeof(recorde));
            arq2.close();
            break;
        }
      }
    }

    return 0;
}

void detectAndDraw(Mat &img, CascadeClassifier &cascade, double scale)
{
    vector<Rect> faces;
    //Scalar color = Scalar(0, 0, 255);
    Mat gray, smallImg;

    cvtColor(img, gray, COLOR_BGR2GRAY);
    double fx = 1 / scale;
    resize(gray, smallImg, Size(), fx, fx, INTER_LINEAR);
    equalizeHist(smallImg, smallImg);

    cascade.detectMultiScale(smallImg, faces,
                             1.1, 2, 0
                                         //|CASCADE_FIND_BIGGEST_OBJECT
                                         //|CASCADE_DO_ROUGH_SEARCH
                                         | CASCADE_SCALE_IMAGE,
                             Size(30, 30));

    for (size_t i = 0; i < faces.size(); i++)
    {
        Rect r = faces[i];
        Point center;

        /*rectangle(img, Point(cvRound(r.x * scale), cvRound(r.y * scale)),
                  Point(cvRound((r.x + r.width - 1) * scale), cvRound((r.y + r.height - 1) * scale)),
                  color, 3, 8, 0);*/
        double centrox = cvRound((r.x * scale + r.x + r.width - 1) / 2);
        double centroy = cvRound((r.y * scale + r.y + r.height - 1) / 2);

        //circle(img, Point(centrox, centroy), cvRound((r.width + r.height) / 4.5), color, 3, 8, 0);

        //Mat img_copy;
        cv::resize(img_object, img_copy, cv::Size(), r.height / 367.0, r.width / 317.0);

        if (r.x + (int)img_copy.cols < 640 && r.y + (int)img_copy.rows < 480)
        {
            //img_copy.copyTo(img.colRange(r.x, r.x + img_copy.cols).rowRange(r.y, r.y + img_copy.rows));
            //drawTransparency(img, img_copy, r.x, r.y);
           // thomas.drawFigura(img, r.x, r.y);
        }

        if (std::abs(centrox - macax) <= 50 && std::abs(centroy - macay) <= 50)
        {
            macax = rand() % (590 - 200) + 100;
            macay = rand() % (430 - 200) + 100;
            score++;
            system("mplayer narutosad.mp3 &");
            img_rdm = ChangeFruit(); // fruta aleatoria
        }
    }
    //img_rdm.copyTo(img.colRange(macax, macax + img_rdm.cols).rowRange(macay, macay + img_rdm.rows));

    //drawTransparency(img, img_rdm, macax, macay);
    
    //fruta_1.transp = imread("apple.png", IMREAD_UNCHANGED);
    fruta_1.drawFigura(img, img_rdm, macax, macay);

    cv::flip(img, img_espelhada, 1);

    //drawText(img_espelhada, "Score: ", score, Point(450, 50));

    // auto end = sc.now();
    // auto time_span = static_cast<chrono::duration<double>>(end - start);

    // if (time_span.count() >= 1)
    // {
    //     //cout<<relogin<<"\n";
    //     relogin++;
    //     start = sc.now();
    // }

    relogio.atualizaTempo();


    //drawText(img_espelhada, "Time: ",relogin, Point(20, 50));




    texto_score.setTexto("Time: " + std::to_string(relogio.getTempoAtual()));
    texto_score.setImg(img_espelhada);
    texto_score.drawTexto(20, 50);

    texto_relogin.setTexto("Score: " + std::to_string(score));
    texto_relogin.setImg(img_espelhada);
    texto_relogin.drawTexto(450, 50);



    imshow(title, img_espelhada);
}

void drawText(Mat &image, string text, int score, Point p)
{
    putText(image, text + std::to_string(score),
            p,
            FONT_HERSHEY_COMPLEX, 1, // font face and scale
            Scalar(255, 255, 255),   // white
            1, LINE_AA);             // line thickness and type
}

void drawTransparency(Mat frame, Mat transp, double xPos, double yPos)
{
    Mat mask;
    vector<Mat> layers;

    split(transp, layers); // seperate channels
    Mat rgb[3] = {layers[0], layers[1], layers[2]};
    mask = layers[3];      // png's alpha channel used as mask
    merge(rgb, 3, transp); // put together the RGB channels, now transp insn't transparent
    transp.copyTo(frame.rowRange(yPos, yPos + transp.rows).colRange(xPos, xPos + transp.cols), mask);
}

Mat ChangeFruit()
{
    Mat img_fruit1 = imread("apple.png", IMREAD_UNCHANGED);
    Mat img_fruit2 = imread("laranja.png", IMREAD_UNCHANGED);
    Mat img_fruit3 = imread("pera.png", IMREAD_UNCHANGED);
    Mat img_fruit4 = imread("morango.png", IMREAD_UNCHANGED);
    Mat img_selected;

    srand(time(NULL));

    int i = rand() % (4) + 1;
    cout << i << endl;

    switch (i)
    {
    case 1:
        img_selected = img_fruit1;
        break;
    case 2:
        img_selected = img_fruit2;
        break;
    case 3:
        img_selected = img_fruit3;
        break;
    case 4:
        img_selected = img_fruit4;
        break;
    default:
        img_selected = img_fruit1;
        break;
    }
    return img_selected;
}

// CLASSE TEXTO AQUI

Texto::Texto(string str, Mat im)
{
    text = str;
    img = im;
}

void Texto::setTexto(std::string str)
{
    text = str;
}

void Texto::setImg(Mat im)
{
    img = im;
}

void Texto::drawTexto(int x, int y)
{
    Point p = Point(x, y);
    putText(img, text,
            p,
            FONT_HERSHEY_COMPLEX, 1, // font face and scale
            Scalar(255, 255, 255),   // white
            1, LINE_AA);             // line thickness and type
}

// CLASSE FIGURA AQUI


void Figura::drawFigura(Mat frame, Mat transp, double xPos, double yPos)
{
   Mat mask;
    vector<Mat> layers;

    split(transp, layers); // seperate channels
    Mat rgb[3] = {layers[0], layers[1], layers[2]};
    mask = layers[3];      // png's alpha channel used as mask
    merge(rgb, 3, transp); // put together the RGB channels, now transp insn't transparent
    transp.copyTo(frame.rowRange(yPos, yPos + transp.rows).colRange(xPos, xPos + transp.cols), mask);
}


// RELOGIO

Relogio::Relogio()
{
    start = sc.now();
    end = sc.now();
    relogin = 0;

}

int Relogio::getTempoAtual()
{
    return relogin;
}


void Relogio::zerarTempo()
{
    relogin = 0;
    start = sc.now();
    end = sc.now();
}

void Relogio::atualizaTempo()
{
    end = sc.now();
    auto time_span = static_cast<chrono::duration<double>>(end - start);

    if (time_span.count() >= 1)
    {
        relogin++;
        start = sc.now();
    }
}