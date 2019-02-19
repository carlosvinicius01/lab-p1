#ifndef SISTEMAIMOBILIARIA_CPP
#define SISTEMAIMOBILIARIA_CPP

#include "SistemaImobiliaria.hpp"

//classe SistemaImobiliaria

void SistemaImobiliaria::cadastraImovel(Imovel* imovel)
{
    imoveis.push_back(imovel);
}

std::vector<Imovel*> SistemaImobiliaria::getImoveis()
{
    return imoveis;
}

SistemaImobiliaria::~SistemaImobiliaria()
{
    for(int i = 0; i < imoveis.size(); i++)
    {
        delete imoveis[i];
    }
}

//classe GerenteDePersistencia


#endif