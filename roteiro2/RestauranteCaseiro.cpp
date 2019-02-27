#ifndef RESTAURANTECASEIRO_CPP
#define RESTAURANTECASEIRO_CPP

#include "MesaDeRestaurante.hpp"
#include "RestauranteCaseiro.hpp"



void RestauranteCaseiro::adicionaPedido(Pedido *p, int m)
{
	mesa[m].adicionaPedido(p);
}

double RestauranteCaseiro::calculaTotalRestaurante()
{
	double total = 0;
	for(MesaDeRestaurante m : mesa)
	{
		total += m.calculaTotal();
	}
}


#endif
