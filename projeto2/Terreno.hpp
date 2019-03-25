#ifndef TERRENO_HPP
#define TERRENO_HPP

#include "Imoveis.hpp"
#include <fstream>

class Terreno : public Imovel
{
  private:
    double area;

  public:
    Terreno() :area(0) {tipo = 't';};

    double getArea();

    void setArea(double a);

    void cadastrar();
    void exibir();

	void write(std::ostream& f);
	void read(std::istream& f);

};


#endif
