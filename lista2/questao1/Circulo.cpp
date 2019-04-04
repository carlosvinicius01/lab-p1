#include <cmath>
#include "Circulo.h"


Circulo::Circulo(std::string n, double r)
{
    nome = n;
    raio = r;
}

double Circulo::calcularArea()
{
    double area = M_PI * (raio*raio);
    return area;
}