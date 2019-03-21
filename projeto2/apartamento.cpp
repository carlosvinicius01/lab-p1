#ifndef APARTAMENTO_CPP
#define APARTAMENTO_CPP

#include "apartamento.hpp"
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
#endif
