#ifndef FRUTINHA_HPP
#define FRUTINHA_HPP
#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
using namespace std;
using namespace cv;

class Frutinha
{
Mat img;
public:
void desenharFrutinha(Mat img, double x, double y);

};

#endif