#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "imoveis.hpp"

class Apartamento : public Imovel
{
  private:
    int andar, nQuartos, nVagas;
    double area;
    char posicao;

  public:
    Apartamento() : andar(0), nQuartos(0), nVagas(0), area(0), posicao(0){};

    int getAndar();
    int getNQuartos();
    int getNVagas();
    double getArea();
    char getPosicao();

    void setAndar(int a);
    void setNQuartos(int nQ);
    void setNVagas(int nV);
    void setArea(double a);
    void setPosicao(char p);

    void cadastrar();
    void exibir();
};

#endif
