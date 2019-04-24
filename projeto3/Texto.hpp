#ifndef TEXTO_HPP
#define TEXTO_HPP
#include <string>
#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"

using namespace std;
using namespace cv;

class Texto
{
  private:
    string text;
    Point posicao;

  public:
    void drawTexto(Mat &image, Point p);
    void set_text(string texto);
};

#endif