#ifndef QUADRADO_H
#define QUADRADO_H

#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica
{
  private:
    double lado;

  public:
    Quadrado(std::string n, double l);
    double calcularArea();
};

#endif // QUADRADO_H
