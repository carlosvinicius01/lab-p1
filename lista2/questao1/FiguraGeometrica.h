#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include <string>
class FiguraGeometrica
{
  protected:
    std::string nome;

  public:
    FiguraGeometrica();
    double calcularArea();
};

#endif // FIGURAGEOMETRICA_H