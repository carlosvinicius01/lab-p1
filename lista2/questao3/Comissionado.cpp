#include "Comissionado.h"

double Comissionado::calculaSalario()
{
    double salario = vendasSemanais * percentualComissao;
    return salario;
}

void Comissionado::setVendas(double v) { vendasSemanais = v; }

void Comissionado::setComissao(double c) { percentualComissao = c; }
