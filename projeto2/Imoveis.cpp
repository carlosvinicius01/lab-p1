#ifndef IMOVEIS_CPP
#define IMOVEIS_CPP

#include "Imoveis.hpp"
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
char Imovel::getTipo() { return tipo; }

void Imovel::setTituloAnuncio(std::string t) { tituloAnuncio = t; }
void Imovel::setRua(std::string r) { rua = r; }
void Imovel::setBairro(std::string b) { bairro = b; }
void Imovel::setCep(std::string c) { cep = c; }
void Imovel::setCidade(std::string cid) { cidade = cid; }
void Imovel::setNumero(int num) { numero = num; }
void Imovel::setValor(double val) { valor = val; }
void Imovel::setDisponibilidade(char disp) { disponibilidade = disp; }

void Imovel::readEndereco(std::istream& f)
{
	size_t size;
	char *data;
	
	f.read((char*) &tipo, sizeof(tipo));

	f.read((char*) &size, sizeof(size));
	data = new char[size+1];
	f.read(data, size);
	data[size]= '\0';
	tituloAnuncio = data;
	delete data;

	f.read((char*) &size, sizeof(size));
	data = new char[size+1];
	f.read(data, size);
	data[size]= '\0';
	rua = data;
	delete data;

	f.read((char*) &size, sizeof(size));
	data = new char[size+1];
	f.read(data, size);
	data[size]= '\0';
	bairro = data;
	delete data;

	f.read((char*) &size, sizeof(size));
	data = new char[size+1];
	f.read(data, size);
	data[size]= '\0';
	cep = data;
	delete data;

	f.read((char*) &size, sizeof(size));
	data = new char[size+1];
	f.read(data, size);
	data[size]= '\0';
	cidade = data;
	delete data;

	f.read((char*) &numero, sizeof(numero));
	f.read((char*) &valor, sizeof(valor));
	f.read((char*) &disponibilidade, sizeof(disponibilidade));
}

void Imovel::writeEndereco(std::ostream& f)
{
	size_t size;

	f.write((char*)&tipo, sizeof(tipo));

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



#endif
