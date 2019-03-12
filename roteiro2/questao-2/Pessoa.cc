#ifndef Pessoa_CPP
#define Pessoa_CPP

#include "Pessoa.h"

Pessoa::~Pessoa()
{
    
}

Pessoa::Pessoa(std::string n)
{
    setNome(n);
}
Pessoa::Pessoa(std::string n, Endereco e, std::string t)
{
    setNome(n);
    setEndereco(e);
    setTelefone(t);
}

void Pessoa::setNome(std::string n) { nome = n; }
void Pessoa::setTelefone(std::string t) { telefone = t; }
void Pessoa::setEndereco(Endereco e) { endereco = e; }

std::string Pessoa::getNome() { return nome; }
std::string Pessoa::getTelefone() { return telefone; }
Endereco Pessoa::getEndereco() { return endereco; }

#endif
