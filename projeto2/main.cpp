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
	Imovel *p = new Apartamento();	
	std::ifstream f;
	f.open("proerd2019.txt");
	p->read(f);
	p->exibir();
	p->read(f);
	p->exibir();
	f.close();
}
