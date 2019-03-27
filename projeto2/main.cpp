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
#include "Menu.hpp"

int main()
{

	GerenteDePersistencia g;

	std::vector<Imovel *> im;

	SistemaImobiliaria sist;

	Menu men;

	sist.setImoveis(g.recuperaListaImoveis());

	/*Imovel *p = new Terreno();
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
	}*/

    men.menuCadastrar(sist);
	g.salvaListaImoveis(sist.getImoveis());
}
