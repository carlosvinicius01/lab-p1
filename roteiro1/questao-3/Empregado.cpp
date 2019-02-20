#ifndef EMPREGADO_CPP
#define EMPREGADO_CPP

#include "Empregado.hpp"


Empregado::Empregado(std::string n, std::string sn, float s)
{
    setNome(n);
    setSobrenome(sn);
    setSalario(s);
}

void Empregado::setSalario(float s)
{
    salario = s < 0 ? 0 : s;
}
void Empregado::setNome(std::string n)
{
    nome = n;
}
void Empregado::setSobrenome(std::string sn)
{
    sobrenome = sn;
}

float Empregado::getSalario() { return salario; }

std::string Empregado::getNome() { return nome; }

std::string Empregado::getSobrenome() { return sobrenome; }


#endif