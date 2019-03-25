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
	std::getline(std::cin, tituloAnuncio);

    std::cout << "Informe a rua: ";
    std::getline(std::cin, rua);

    std::cout << "Informe o bairro: ";
    std::getline(std::cin, bairro);

    std::cout << "Informe o CEP: ";
    std::getline(std::cin, cep);

    std::cout << "Informe a cidade: ";
    std::getline(std::cin, cidade);

    std::cout << "Informe o numero: ";
    std::cin >> numero;
	std::cin.ignore();	

    std::cout << "Informe o valor: ";
    std::cin >> valor;
	std::cin.ignore();

    std::cout << "Informe a disponibilidade: ";
    std::cin >> disponibilidade;
	std::cin.ignore();

    std::cout << "Informe a area: ";
    std::cin >> area;
	std::cin.ignore();
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
	writeEndereco(f);
	f.write((char*)&area, sizeof(area));	

}

void Terreno::read(std::istream& f)
{
	readEndereco(f);
	f.read((char*)&area, sizeof(area));	
	
}

#endif
