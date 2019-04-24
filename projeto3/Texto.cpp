#include "Texto.hpp"

void Texto::drawTexto(Mat &image, Point p)
{
    putText(image, text,
            p,
            FONT_HERSHEY_COMPLEX, 1, // font face and scale
            Scalar(255, 255, 255),   // white
            1, LINE_AA);             // line thickness and type
}

void Texto::set_text(string texto)
{
    text = texto;
}