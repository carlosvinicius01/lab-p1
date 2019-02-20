#ifndef CONTROLEDEGASTOS_CPP
#define CONTROLEDEGASTOS_CPP

#include "ControleDeGastos.hpp"

void ControleDeGastos::setDespesa(Despesa d) { despesas.push_back(d); }
double ControleDeGastos::calculaTotalDespesas()
{
    double soma = 0;
    for (Despesa d : despesas)
    {
        soma += d.getValor();
    }
}

bool ControleDeGastos::existeDespesaDoTipo(std::string t)
{
    int soma = 0;
    for (Despesa d : despesas)
    {
        if (d.getTipoDeGasto() == t)
            return true;
    }
    return false;
}

#endif