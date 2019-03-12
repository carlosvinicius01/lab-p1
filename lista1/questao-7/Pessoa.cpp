#include "Pessoa.hpp"

Pessoa::~Pessoa() {}

Pessoa::Pessoa(std::string n)
{
    setNome(n);
    setIdade(0);
    setTelefone("");
}

Pessoa::Pessoa(std::string n, int i, std::string t)
{
    setNome(n);
    setIdade(i);
    setTelefone(t);
}

void Pessoa::setNome(std::string n)
{
    nome = n;
}

std::string Pessoa::getNome()
{
    return nome;
}

void Pessoa::setIdade(int i)
{
    idade = i;
}

int Pessoa::getIdade()
{
    return idade;
}

void Pessoa::setTelefone(std::string t)
{
    telefone = t;
}

std::string Pessoa::getTelefone()
{
    return telefone;
}