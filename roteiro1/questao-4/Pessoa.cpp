#ifndef PESSOA_CPP
#define PESSOA_CPP

#include "Pessoa.hpp"

Pessoa::Pessoa()
{
    nome = telefone = "";
    idade = 0;
}

Pessoa::Pessoa(std::string n)
{
    setIdade(0);
    setTelefone("");
    setNome(n);
}
Pessoa::Pessoa(std::string n, int i, std::string t)
{
    setNome(n);
    setTelefone(t);
    setIdade(i);
}

void Pessoa::setIdade(int i)
{
    idade = i;
}
void Pessoa::setNome(std::string n)
{
    nome = n;
}
void Pessoa::setTelefone(std::string t)
{
    telefone = t;
}

int Pessoa::getIdade() { return idade; }
std::string Pessoa::getNome() { return nome; }
std::string Pessoa::getTelefone() { return telefone; }

#endif
