#ifndef SISTEMAIMOBILIARIA_CPP
#define SISTEMAIMOBILIARIA_CPP

#include "SistemaImobiliaria.hpp"
#include <algorithm>
#include <iostream>

void SistemaImobiliaria::cadastraImovel(Imovel *imovel)
{
	imoveis.push_back(imovel);
}

std::vector<Imovel *> SistemaImobiliaria::getImoveis()
{
	return imoveis;
}

void SistemaImobiliaria::setImoveis(std::vector<Imovel*> im)
{
	imoveis = im;
}

std::vector<Imovel*> SistemaImobiliaria::getImoveisPorTipo(char tipo, std::vector<Imovel*> imvs)
{
	std::vector<Imovel *> imoveisPorTipo;
	for (Imovel *imovel : imvs)
	{
		if(imovel->getTipo()==tipo)
		{
			imoveisPorTipo.push_back(imovel);
		}
	}
	return imoveisPorTipo;
}


std::vector<Imovel *> SistemaImobiliaria::getImoveisPorBairro(std::string bairro, std::vector<Imovel*> imvs)
{
	std::vector<Imovel *> imoveisporbairro;
	for (Imovel *imovel : imvs)
	{
		std::string n1 = imovel->getBairro();
		std::string n2 = bairro;
		std::transform(n1.begin(), n1.end(), n1.begin(), ::tolower);
		std::transform(n2.begin(), n2.end(), n2.begin(), ::tolower);
		int menor = n1.length() > n2.length() ? n2.length() : n1.length();
		if (n1.compare(0, menor, n2) == 0)
			imoveisporbairro.push_back(imovel);
	}
	return imoveisporbairro;
}
std::vector<Imovel *> SistemaImobiliaria::getImoveisPorTitulo(std::string titulo, std::vector<Imovel*> imvs)
{
	std::vector<Imovel *> imoveisportipo;
	for (Imovel *imovel : imvs)
	{
		std::string n1 = imovel->getTituloAnuncio();
		std::string n2 = titulo;
		std::transform(n1.begin(), n1.end(), n1.begin(), ::tolower);
		std::transform(n2.begin(), n2.end(), n2.begin(), ::tolower);
		int menor = n1.length() > n2.length() ? n2.length() : n1.length();
		if (n1.compare(0, menor, n2) == 0)
			imoveisportipo.push_back(imovel);
	}
	return imoveisportipo;
}

std::vector<Imovel *> SistemaImobiliaria::getImoveisPorCidade(std::string cidade, std::vector<Imovel*> imvs)
{
	std::vector<Imovel *> imovelporcidade;
	for (Imovel *imovel : imvs)
	{
		std::string n1 = imovel->getCidade();
		std::string n2 = cidade;
		std::transform(n1.begin(), n1.end(), n1.begin(), ::tolower);
		std::transform(n2.begin(), n2.end(), n2.begin(), ::tolower);
		int menor = n1.length() > n2.length() ? n2.length() : n1.length();
		if (n1.compare(0, menor, n2) == 0)
			imovelporcidade.push_back(imovel);
	}
	return imovelporcidade;
}

std::vector<Imovel *> SistemaImobiliaria::getImoveisPorValor(double min, double max, std::vector<Imovel*> imvs)
{
	std::vector<Imovel *> imovelporvalor;
	for (Imovel *imovel : imvs)
	{
		if (imovel->getValor() >= min && imovel->getValor() <= max)
			imovelporvalor.push_back(imovel);
	}
	return imovelporvalor;
}

std::vector<Imovel *> SistemaImobiliaria::getImoveisPorDisponibilidade(char disp, std::vector<Imovel*> imvs)
{
	std::vector<Imovel *> imovelpordisp;
	for (Imovel *imovel : imvs)
	{
		if (imovel->getDisponibilidade() == disp)
			imovelpordisp.push_back(imovel);
	}
	return imovelpordisp;
}

void SistemaImobiliaria::exibirImoveis(std::vector<Imovel *> im)
{
	int i = 0;
	for (Imovel *p : im)
	{
		std::cout << i << " ";
		p->exibir();
		i++;
	}
}

SistemaImobiliaria::~SistemaImobiliaria()
{
	for (int i = 0; i < imoveis.size(); i++)
	{
		delete imoveis[i];
	}
}

void remover(std::vector<Imovel *> im, int i)
{
	delete im[i];
	im.erase(im.begin() + i);
}


#endif
