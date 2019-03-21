#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "Imoveis.hpp"
#include "Casa.hpp"
#include "Apartamento.hpp"
#include "Terreno.hpp"
#include "SistemaImobiliaria.hpp"
#include "GerenteDePersistencia.hpp"

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

	p = new Terreno;

	sist.cadastraImovel(p);

    for(Imovel* im : sist.getImoveis())
    {
        im->exibir();
    }

    

    for(Imovel* im : sist.getImoveis())
    {
        im->exibir();
    }
	
	
	
}
