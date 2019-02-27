#ifndef PEDIDO_CPP
#define PEDIDO_CPP

#include "Pedido.hpp"
#include <string>


Pedido::Pedido(int n, int q, std::string d, double p)
{
	numero = n;
	quantidade = q;
	descricao = d;
	preco = p;
}

std::string Pedido::toString()
{
	return std::to_string(numero) + " " + std::to_string(quantidade) + " " + descricao + " " + std::to_string(preco) ;
}

#endif
