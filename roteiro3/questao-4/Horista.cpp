
#include "Horista.h"

double Horista::calculaSalario()
{
    double salario = salarioPorHora * horasTrabalhadas;
    return salario;
}

void Horista::setHoras(double h) { horasTrabalhadas = h; }

void Horista::setSalarioPorHora(double s) { salarioPorHora = s; }