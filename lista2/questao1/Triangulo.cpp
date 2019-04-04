#include "Triangulo.h"
#include <cmath>
Triangulo::Triangulo(std::string n, double l)
{
    nome = n;
    lado = l;
}

double Triangulo::calcularArea()
{
    double area = (pow(lado, 2) * sqrt(3)) / 4;
    return area;
}