#ifndef RESTAURANTECASEIRO_CPP
#define RESTAURANTECASEIRO_CPP

#include "MesaDeRestaurante.hpp"
#include "RestauranteCaseiro.hpp"

RestauranteCaseiro::RestauranteCaseiro(std::vector<MesaDeRestaurante*> m)
{
	mesa = m;
}

void RestauranteCaseiro::adicionaPedido(Pedido *p, int m)
{
	mesa[m]->adicionaPedido(p);
}

double RestauranteCaseiro::calculaTotalRestaurante()
{
	double total = 0;
	for(MesaDeRestaurante *m : mesa)
	{
		total += m->calculaTotal();
	}
}

void RestauranteCaseiro::adicionaMesa(MesaDeRestaurante *m)
{
	mesa.push_back(m);
}

#endif
