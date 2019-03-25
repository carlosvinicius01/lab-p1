#ifndef GERENTEDEPERSISTENCIA_CPP
#define GERENTEDEPERSISTENCIA_CPP

#include <fstream>
#include "GerenteDePersistencia.hpp"

std::vector<Imovel*> GerenteDePersistencia::recuperaListaImoveis()
{
	std::vector<Imovel*> im;	
	

}


void GerenteDePersistencia::salvaListaImoveis(std::vector<Imovel*> im)
{
	std::ofstream f1, f2, f3;	
	f1.open("casa.txt");
	f2.open("apartamento.txt");
	f3.open("terreno.txt");

	for(auto p : im)
	{	
		switch(p->getTipo())
		{
			case 'c':
				p->write(f1);
			case 'a':
				p->write(f2);
			case 't':
				p->write(f3);
		}	
	}

	f1.close();
	f2.close();
	f3.close(); 
}

#endif
