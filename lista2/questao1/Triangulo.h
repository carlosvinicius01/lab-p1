#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica
{
  private:
    double lado;

  public:
    Triangulo(std::string n, double l);
    double calcularArea();
};

#endif // TRIANGULO_H