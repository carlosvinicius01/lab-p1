#ifndef TEXTO_HPP
#define TEXTO_HPP
#include <string>
#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"

using namespace cv;

class Texto
{
private:
	Mat img;
	std::string text;

public:
	void drawTexto(int x, int y);
	void setTexto(std::string);
	Texto(string, Mat);
};

#endif
