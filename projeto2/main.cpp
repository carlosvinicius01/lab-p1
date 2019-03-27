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
	GerenteDePersistencia g;

	std::vector<Imovel *> im;

	SistemaImobiliaria sist;


	Imovel *p = new Terreno();
	p->cadastrar();
	im.push_back(p);

	p = new Casa();
	p->cadastrar();
	im.push_back(p);

	p = new Terreno();
	p->cadastrar();
	im.push_back(p);

	p = new Apartamento();
	p->cadastrar();
	im.push_back(p);

	g.salvaListaImoveis(im);
	
	for(auto p : im)
	{
		delete p;	
	}

	std::vector<Imovel*> im2;
	im2 = g.recuperaListaImoveis();
	sist.exibirImoveis(im2);

}
