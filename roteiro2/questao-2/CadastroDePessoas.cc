#ifndef CadastroDePessoas_CPP
#define CadastroDePessoas_CPP

#include "CadastroDePessoas.h"

CadastroDePessoas::CadastroDePessoas()
{
    
}

CadastroDePessoas::~CadastroDePessoas()
{
    for(Pessoa *p : pessoa)
    {
        delete p;
    }
    pessoa.clear();
}

void CadastroDePessoas::cadastrarPessoa(Pessoa *p)
{
    pessoa.push_back(p);
}

std::vector<Pessoa *> CadastroDePessoas::getPessoa()
{
    return pessoa;
}

#endif
