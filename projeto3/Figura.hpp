#ifndef FIGURA_HPP
#define FIGURA_HPP
#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include <vector>
#include <string>

using namespace std;
using namespace cv;

class Figura
{
    Mat img;

    public:
    void drawFigura(Mat frame, double xPos, double yPos);
    Figura(string img_name);


};

#endif