#include "Figura.hpp"

Figura::Figura(string img_name)
{
    img = imread(img_name, IMREAD_UNCHANGED);
}

void Figura::drawFigura(Mat frame, double xPos, double yPos)
{
    Mat mask;
    vector<Mat> layers;
    split(img, layers); // seperate channels
    Mat rgb[3] = {layers[0], layers[1], layers[2]};
    mask = layers[3];   // png's alpha channel used as mask
    merge(rgb, 3, img); // put together the RGB channels, now transp insn't transparent
    img.copyTo(frame.rowRange(yPos, yPos + img.rows).colRange(xPos, xPos + img.cols), mask);
}
