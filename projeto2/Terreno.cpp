#ifndef TERRENO_CPP
#define TERRENO_CPP

#include "Terreno.hpp"
#include <string>
#include <iostream>

double Terreno::getArea() { return area; }

void Terreno::setArea(double a) { area = a; }

void Terreno::cadastrar()
{
    std::cout << "Informe o Titulo: ";
    std::cin >> tituloAnuncio;

    std::cout << "Informe a rua: ";
    std::cin >> rua;

    std::cout << "Informe o bairro: ";
    std::cin >> bairro;

    std::cout << "Informe o CEP: ";
    std::cin >> cep;

    std::cout << "Informe a cidade: ";
    std::cin >> cidade;

    std::cout << "Informe o numero: ";
    std::cin >> numero;

    std::cout << "Informe o valor: ";
    std::cin >> valor;

    std::cout << "Informe a disponibilidade: ";
    std::cin >> disponibilidade;

    std::cout << "Informe a area: ";
    std::cin >> area;
}

void Terreno::exibir()
{
    std::cout << "Titulo: " << tituloAnuncio << std::endl;
    std::cout << "Rua: " << rua << std::endl;
    std::cout << "Bairro: " << bairro << std::endl;
    std::cout << "CEP: " << cep << std::endl;
    std::cout << "Cidade: " << cidade << std::endl;
    std::cout << "Numero: " << numero << std::endl;
    std::cout << "Valor: " << valor << std::endl;
    std::cout << "Disponibilidade: " << disponibilidade << std::endl;

    std::cout << "Area: " << area << std::endl;
}


void Terreno::write(std::ostream& f)
{
	size_t size;
	size = tituloAnuncio.size();
	f.write((char*) &size, sizeof(size_t));
	f.write((char*)tituloAnuncio.c_str(), size);

	size = rua.size();
	f.write((char*) &size, sizeof(size_t));
	f.write((char*)rua.c_str(), size);

	size = bairro.size();
	f.write((char*) &size, sizeof(size_t));
	f.write((char*)bairro.c_str(), size);

	size = cep.size();
	f.write((char*) &size, sizeof(size_t));
	f.write((char*)cep.c_str(), size);

	size = cidade.size();
	f.write((char*) &size, sizeof(size_t));
	f.write((char*)cidade.c_str(), size);

	f.write((char*)&numero, sizeof(numero));
	f.write((char*)&valor, sizeof(valor));
	f.write((char*)&disponibilidade, sizeof(disponibilidade));
}
void Terreno::read(std::istream& f)
{
	readEndereco(f);
	
}

#endif
