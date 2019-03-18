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



#endif
