#ifndef APARTAMENTO_CPP
#define APARTAMENTO_CPP

#include "Apartamento.hpp"
#include <string>
#include <iostream>

int Apartamento::getAndar() { return andar; }
int Apartamento::getNQuartos() { return nQuartos; }
int Apartamento::getNVagas() { return nVagas; }
double Apartamento::getArea() { return area; }
char Apartamento::getPosicao() { return posicao; }

void Apartamento::setAndar(int a) { andar = a; }
void Apartamento::setNQuartos(int nQ) { nQuartos = nQ; }
void Apartamento::setNVagas(int nV) { nVagas = nV; }
void Apartamento::setArea(double a) { area = a; }
void Apartamento::setPosicao(char p) { posicao = p; }

void Apartamento::cadastrar()
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
	
    std::cout << "Informe o andar: ";
    std::cin >> andar;
	std::cin.ignore();

    std::cout << "Informe o numero de quartos: ";
    std::cin >> nQuartos;
	std::cin.ignore();

    std::cout << "Informe o numero de vagas de garagem: ";
    std::cin >> nVagas;
	std::cin.ignore();

    std::cout << "Informe a area: ";
    std::cin >> area;
	std::cin.ignore();

    std::cout << "Informe a posicao: ";
    std::cin >> posicao;
	std::cin.ignore();
}

void Apartamento::exibir()
{
    std::cout << "Titulo: " << tituloAnuncio << std::endl;
    std::cout << "Rua: " << rua << std::endl;
    std::cout << "Bairro: " << bairro << std::endl;
    std::cout << "CEP: " << cep << std::endl;
    std::cout << "Cidade: " << cidade << std::endl;
    std::cout << "Numero: " << numero << std::endl;
    std::cout << "Valor: " << valor << std::endl;
    std::cout << "Disponibilidade: " << disponibilidade << std::endl;

    std::cout << "Andar: " << andar << std::endl;
    std::cout << "Numero de quartos: " << nQuartos << std::endl;
    std::cout << "Numero de vagas de garagem: " << nVagas << std::endl;
    std::cout << "Area: " << area << std::endl;
    std::cout << "Posicao: " << posicao << std::endl;
}

void Apartamento::write(std::ostream& f)
{
	writeEndereco(f);
	f.write((char*)&andar, sizeof(andar));
	f.write((char*)&nQuartos, sizeof(nQuartos));
	f.write((char*)&nVagas, sizeof(nVagas));	
	f.write((char*)&area, sizeof(area));
	f.write((char*)&posicao, sizeof(posicao));
}

void Apartamento::read(std::istream& f)
{
	readEndereco(f);
	f.read((char*)&andar, sizeof(andar));
	f.read((char*)&nQuartos, sizeof(nQuartos));
	f.read((char*)&nVagas, sizeof(nVagas));	
	f.read((char*)&area, sizeof(area));
	f.read((char*)&posicao, sizeof(posicao));
	
}

#endif
