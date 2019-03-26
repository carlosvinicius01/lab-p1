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
	SistemaImobiliaria sist;
	
	std::vector<Imovel *> im;

	im = g.recuperaListaImoveis();

	sist.exibirImoveis(im);

	//g.salvaListaImoveis(im);
}
