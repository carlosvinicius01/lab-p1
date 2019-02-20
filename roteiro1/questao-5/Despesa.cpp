#ifndef DESPESA_CPP
#define DESPESA_CPP

#include "Despesa.hpp"

Despesa::Despesa(std::string t, double v)
{
    setTipoDeGasto(t);
    setValor(v);
}

void Despesa::setTipoDeGasto(std::string t) { tipoDeGasto = t; }
void Despesa::setValor(double v) { valor = v; }
std::string Despesa::getTipoDeGasto() { return tipoDeGasto; }
double Despesa::getValor() { return valor; }

#endif