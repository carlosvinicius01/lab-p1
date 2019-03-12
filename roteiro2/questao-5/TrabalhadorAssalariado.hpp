#ifndef TRABALHADORASSALARIADO_HPP
#define TRABALHADORASSALARIADO_HPP

#include "Trabalhador.hpp"

class TrabalhadorAssalariado : public Trabalhador
{

  public:
    TrabalhadorAssalariado(std::string n, double s);
    double calcularPagamentoSemanal();
    
};

#endif
