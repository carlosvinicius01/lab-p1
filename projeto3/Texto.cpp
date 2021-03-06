#include "Texto.hpp"



void Texto::setTexto(std::string str)
{
	text = str;
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

