#ifndef CASA_CPP
#define CASA_CPP

#include "Casa.hpp"
#include <string>
#include <iostream>

int Casa::getNPavimentos() { return nPavimentos; }
int Casa::getNQuartos() { return nQuartos; }
double Casa::getAreaTerreno() { return areaTerreno; }
double Casa::getAreaConstruida() { return areaConstruida; }

void Casa::setNPavimentos(int nP) { nPavimentos = nP; }
void Casa::setNQuartos(int nQ) { nQuartos = nQ; }
void Casa::setAreaTerreno(double aT) { areaTerreno = aT; }
void Casa::setAreaConstruida(double aC) { areaConstruida = aC; }

void Casa::cadastrar()
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

    std::cout << "Informe o numero de pavimentos: ";
    std::cin >> nPavimentos;
	std::cin.ignore();

    std::cout << "Informe o numero de quartos: ";
    std::cin >> nQuartos;
	std::cin.ignore();

    std::cout << "Informe a area do terreno: ";
    std::cin >> areaTerreno;
	std::cin.ignore();

    std::cout << "Informe a area construida: ";
    std::cin >> areaConstruida;
	std::cin.ignore();
}

void Casa::exibir()
{
    std::cout << "Titulo: " << tituloAnuncio << std::endl;
    std::cout << "Rua: " << rua << std::endl;
    std::cout << "Bairro: " << bairro << std::endl;
    std::cout << "CEP: " << cep << std::endl;
    std::cout << "Cidade: " << cidade << std::endl;
    std::cout << "Numero: " << numero << std::endl;
    std::cout << "Valor: " << valor << std::endl;
    std::cout << "Disponibilidade: " << disponibilidade << std::endl;

    std::cout << "Numero de pavimentos: " << nPavimentos << std::endl;
    std::cout << "Numero de quartos: " << nQuartos << std::endl;
    std::cout << "Area do terreno: " << areaTerreno << std::endl;
    std::cout << "Area construida: " << areaConstruida << std::endl;
}

void Casa::write(std::ostream& f)
{
	writeEndereco(f);
	f.write((char*)&nPavimentos, sizeof(nPavimentos));
	f.write((char*)&nQuartos, sizeof(nQuartos));
	f.write((char*)&areaTerreno, sizeof(areaTerreno));	
	f.write((char*)&areaConstruida, sizeof(areaConstruida));
}

void Casa::read(std::istream& f)
{
	readEndereco(f);
	f.read((char*)&nPavimentos, sizeof(nPavimentos));
	f.read((char*)&nQuartos, sizeof(nQuartos));
	f.read((char*)&areaTerreno, sizeof(areaTerreno));	
	f.read((char*)&areaConstruida, sizeof(areaConstruida));
	
}

#endif
