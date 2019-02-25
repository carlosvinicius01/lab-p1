#ifndef MESADERESTAURANTE_CPP
#define MESADERESTAURANTE_CPP

#include "MesaDeRestaurante.hpp"

void MesaDeRestaurante::adicionaPedido(Pedido *p)
{
	for(Pedido *i : pedido)
	{
		if(i->numero == p->numero)
		{
			i->quantidade += 1;
			return;
		}
	}
	pedido.push_back(p);
}

void MesaDeRestaurante::zeraPedidos()
{
	for(Pedido *i : pedido)
	{
		i->quantidade = 0;
	}
}
double MesaDeRestaurante::calculaTotal()
{
	double total = 0;
	for(Pedido *i : pedido)
	{
		total += i->quantidade * i->preco;
	}
	return total;
}
#endif
