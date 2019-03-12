#ifndef TRABALHADORASSALARIADO_CPP
#define TRABALHADORASSALARIADO_CPP

#include "TrabalhadorAssalariado.hpp"

TrabalhadorAssalariado::TrabalhadorAssalariado(std::string n, double s)
{
    nome = n;
    salario = s;
}

double TrabalhadorAssalariado::calcularPagamentoSemanal()
{
    return salario / 4.0;
}

#endif
