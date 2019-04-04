#ifndef CIRCULO_H
#define CIRCULO_H

#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica
{
  private:
    double raio;

  public:
    Circulo(std::string n, double r);
    double calcularArea();
};

#endif // CIRCULO_H
