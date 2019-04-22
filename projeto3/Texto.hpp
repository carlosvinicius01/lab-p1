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
    public:
    void drawTexto(Mat &image, string text, Point p);

};

#endif