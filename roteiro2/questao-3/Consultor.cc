#ifndef Consultor_CPP
#define Consultor_CPP

#include "Consultor.h"

Consultor::~Consultor(){}

Consultor::Consultor(std::string m, std::string n, double s)
{
    setNome(n);
    setMatricula(m);
    setSalario(s);
}

double Consultor::getSalario()
{
    return salario*1.1;
}

#endif
