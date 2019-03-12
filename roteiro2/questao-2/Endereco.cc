#ifndef Endereco_CPP
#define Endereco_CPP

#include "Endereco.h"

Endereco::~Endereco()
{
    
}

Endereco::Endereco()
{
    rua = cep = bairro = cidade = estado = " ";
    numero = 0;
}

Endereco::Endereco(std::string r, std::string c, std::string b, std::string ci, std::string e, int n)
{
    rua = r;
    cep = c;
    bairro = b;
    cidade = ci;
    estado = e;
    numero = n;
}

std::string Endereco::toString()
{
    return rua + " " + cep + " " + bairro + " " + cidade + " " + estado + " " + std::to_string(numero);
}



#endif
