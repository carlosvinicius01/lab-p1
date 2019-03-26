#ifndef GERENTEDEPERSISTENCIA_CPP
#define GERENTEDEPERSISTENCIA_CPP

#include <fstream>
#include "GerenteDePersistencia.hpp"

std::vector<Imovel*> GerenteDePersistencia::recuperaListaImoveis()
{
	std::ifstream f;
	f.open("DIGANAOASDROGASPROERDA.txt");
	
	int numeroImoveis;
	f.read((char *) &(numeroImoveis), sizeof(numeroImoveis));
	
	std::vector<Imovel*> im(numeroImoveis);	
	
	for(auto p : im)
	{
		char tipo;
		f.read((char *) &(tipo), sizeof(tipo));

		switch(tipo)
		{
			case 'c':
				p = new Casa();
				break;
			case 'a':
				p = new Apartamento();
				break;
			case 't':
				p = new Terreno();
				break;
		}
		p->read(f);
	}

	return im;

}


void GerenteDePersistencia::salvaListaImoveis(std::vector<Imovel*> im)
{
	std::ofstream f;	
	f.open("DIGANAOASDROGASPROERDA.txt");
	
	int numeroImoveis = im.size();
	f.write((char *) &(numeroImoveis), sizeof(numeroImoveis));
	
	for(auto p : im)
	{
		p->write(f);
	}

	f.close();
}

#endif
