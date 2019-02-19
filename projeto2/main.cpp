#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "imoveis.hpp"
#include "SistemaImobiliaria.hpp"

int main()
{
    std::vector<Imovel*> imovel; // lista dinamica de imoveis
    Imovel* p;
    SistemaImobiliaria sist;

    p = new Apartamento;

    sist.cadastraImovel(p);


    p = new Casa;

    sist.cadastraImovel(p);


    p = new Apartamento;

    sist.cadastraImovel(p);



    for(Imovel* im : sist.getImoveis())
    {
        im->exibir();
    }

    delete sist;

    for(Imovel* im : sist.getImoveis())
    {
        im->exibir();
    }

}