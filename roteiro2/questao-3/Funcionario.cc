#ifndef Funcionario_CPP
#define Funcionario_CPP

#include "Funcionario.h"

Funcionario::Funcionario()
{
    setNome("");
    setMatricula("");
    setSalario(0);
}

Funcionario::Funcionario(std::string m, std::string n, double s)
{
    setNome(n);
    setMatricula(m);
    setSalario(s);
}

Funcionario::~Funcionario() {}
std::string Funcionario::getMatricula() { return matricula; }
std::string Funcionario::getNome() { return nome; }
double Funcionario::getSalario() { return salario; }

void Funcionario::setMatricula(std::string m)
{
    matricula = m;
}
void Funcionario::setNome(std::string n)
{
    nome = n;
}
void Funcionario::setSalario(double s)
{
    salario = s;
}

#endif
