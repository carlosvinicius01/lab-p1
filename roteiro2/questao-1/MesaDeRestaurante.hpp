#ifndef MESADERESTAURANTE_HPP
#define MESADERESTAURANTE_HPP

#include "Pedido.hpp"
#include <vector>

class MesaDeRestaurante
{
	std::vector<Pedido*> pedido;
	
	public:
		~MesaDeRestaurante();
		void adicionaPedido(Pedido *p);	
		void zeraPedidos();
		double calculaTotal();
		std::vector<Pedido*> getPedido();
	
};

#endif
