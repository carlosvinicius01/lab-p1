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

	im.push_back(new Casa());
	im.push_back(new Terreno());
	im.push_back(new Terreno());
	im.push_back(new Apartamento());

	for(auto p : im)
	{
		p->cadastrar();
	}
	g.salvaListaImoveis(im);
}
