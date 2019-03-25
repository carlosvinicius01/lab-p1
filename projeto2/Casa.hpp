#ifndef CASA_HPP
#define CASA_HPP

#include "Imoveis.hpp"



class Casa : public Imovel
{
  private:
    int nPavimentos, nQuartos;
    double areaTerreno, areaConstruida;

  public:
    Casa() : nPavimentos(0), nQuartos(0), areaTerreno(0), areaConstruida(0){ tipo = 'c';};

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

	void write(std::ostream& f);
	void read(std::istream& f);
    
};

#endif
