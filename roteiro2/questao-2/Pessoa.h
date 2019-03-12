#ifndef Pessoa_H
#define Pessoa_H

#include "Endereco.h"

class Pessoa
{
    std::string nome, telefone;
    Endereco endereco;

  public:
    Pessoa(std::string n);
    Pessoa(std::string n, Endereco e, std::string t);
    virtual ~Pessoa();

    void setNome(std::string n);
    void setTelefone(std::string t);
    void setEndereco(Endereco e);

    std::string getNome();
    std::string getTelefone();
    Endereco getEndereco();
};

#endif
