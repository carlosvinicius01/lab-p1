#ifndef TRABALHADORPORHORA_HPP
#define TRABALHADORPORHORA_HPP

#include "Trabalhador.hpp"

class TrabalhadorPorHora : public Trabalhador
{
	double valorDaHora;

  public:
	TrabalhadorPorHora(std::string n, double v);
	double calcularPagamentoSemanal(int horas);
};

#endif
