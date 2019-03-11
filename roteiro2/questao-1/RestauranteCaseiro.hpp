#ifndef RESTAURANTECASEIRO_HPP
#define RESTAURANTECASEIRO_HPP

#include "MesaDeRestaurante.hpp"

class RestauranteCaseiro
{
	std::vector<MesaDeRestaurante*> mesa;
	
	public:
		virtual ~RestauranteCaseiro();
		RestauranteCaseiro(std::vector<MesaDeRestaurante*> m);
		void adicionaMesa(MesaDeRestaurante *m);
		void adicionaPedido(Pedido *p, int m);	
		double calculaTotalRestaurante();
		
};

#endif
