#ifndef IMOVEIS_CPP
#define IMOVEIS_CPP

#include "imoveis.hpp"
#include <string>
#include <iostream>

// Imovel
std::string Imovel::getTituloAnuncio() { return tituloAnuncio; }
std::string Imovel::getRua() { return rua; }
std::string Imovel::getBairro() { return bairro; }
std::string Imovel::getCep() { return cep; }
std::string Imovel::getCidade() { return cidade; }
int Imovel::getNumero() { return numero; }
double Imovel::getValor() { return valor; }
char Imovel::getDisponibilidade() { return disponibilidade; }

void Imovel::setTituloAnuncio(std::string t) { tituloAnuncio = t; }
void Imovel::setRua(std::string r) { rua = r; }
void Imovel::setBairro(std::string b) { bairro = b; }
void Imovel::setCep(std::string c) { cep = c; }
void Imovel::setCidade(std::string cid) { cidade = cid; }
void Imovel::setNumero(int num) { numero = num; }
void Imovel::setValor(double val) { valor = val; }
void Imovel::setDisponibilidade(char disp) { disponibilidade = disp; }

// Casa
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

    std::cout << "Informe o numero de pavimentos: ";
    std::cin >> nPavimentos;

    std::cout << "Informe o numero de quartos: ";
    std::cin >> nQuartos;

    std::cout << "Informe a area do terreno: ";
    std::cin >> areaTerreno;

    std::cout << "Informe a area construida: ";
    std::cin >> areaConstruida;
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

// Apartamento
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

    std::cout << "Informe o andar: ";
    std::cin >> andar;

    std::cout << "Informe o numero de quartos: ";
    std::cin >> nQuartos;

    std::cout << "Informe o numero de vagas de garagem: ";
    std::cin >> nVagas;

    std::cout << "Informe a area: ";
    std::cin >> area;

    std::cout << "Informe a posicao: ";
    std::cin >> posicao;
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

//Terreno
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

#endif