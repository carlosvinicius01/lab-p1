#ifndef TERRENO_HPP
#define TERRENO_HPP

#include "Imoveis.hpp"

class Terreno : public Imovel
{
  private:
    double area;

  public:
    Terreno() :area(0) {};

    double getArea();

    void setArea(double a);

    void cadastrar();
    void exibir();
};


#endif
