#ifndef CASA_HPP
#define CASA_HPP

#include "imoveis.hpp"



class Casa : public Imovel
{
  private:
    int nPavimentos, nQuartos;
    double areaTerreno, areaConstruida;

  public:
    Casa() : nPavimentos(0), nQuartos(0), areaTerreno(0), areaConstruida(0){};

    int getNPavimentos();
    int getNQuartos();
    double getAreaTerreno();
    double getAreaConstruida();

    void setNPavimentos(int nP);
    void setNQuartos(int nQ);
    void setAreaTerreno(double aT);
    void setAreaConstruida(double aC);

    void cadastrar();
    void exibir();
    
};

#endif
