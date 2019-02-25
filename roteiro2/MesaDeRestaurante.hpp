#ifndef MESADERESTAURANTE_HPP
#define MESADERESTAURANTE_HPP

#include "Pedido.hpp"
#include <vector>

class MesaDeRestaurante
{
	std::vector<Pedido*> pedido;
	
	public:
		void adicionaPedido(Pedido *p);	
		void zeraPedidos();
		double calculaTotal();
	
};

#endif
