#ifndef TRABALHADORPORHORA_CPP
#define TRABALHADORPORHORA_CPP

#include "TrabalhadorPorHora.hpp"

TrabalhadorPorHora::TrabalhadorPorHora(std::string n, double v)
{
    nome = n;
    valorDaHora = v;
}

double TrabalhadorPorHora::calcularPagamentoSemanal(int horas)
{
    return horas >= 40 ? 40*valorDaHora + (horas-40)*1.5*valorDaHora : horas * valorDaHora;
}

#endif
