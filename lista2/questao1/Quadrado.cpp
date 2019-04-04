#include "Quadrado.h"

Quadrado::Quadrado(std::string n, double l)
{
    nome = n;
    lado = l;
}

double Quadrado::calcularArea()
{
    double area = lado * lado;
    return area;
}
