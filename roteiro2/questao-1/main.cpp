#include <iostream>

#include "RestauranteCaseiro.hpp"
#include "MesaDeRestaurante.hpp"
#include "Pedido.hpp" 

int main()
{
	

	MesaDeRestaurante *m1 = new MesaDeRestaurante;
	MesaDeRestaurante *m2 = new MesaDeRestaurante;

	Pedido *p1 = new Pedido(1,1,"Chocolate", 90.5);
	Pedido *p2 = new Pedido(2,1,"Suquinho de laranja", 10);

	m1->adicionaPedido(p1);
	m1->adicionaPedido(p1);
	m1->adicionaPedido(p2);

	std::cout << (m1->getPedido(0))->toString() << "\n";
	std::cout << m1->calculaTotal();

	
	RestauranteCaseiro *rest = new RestauranteCaseiro({m1, m2});

	std::cout  << "\n";
	
	rest->adicionaPedido(p2, 1);

	std::cout << m2->getPedido(0)->toString() << "\n";
	
	m1->zeraPedidos();

	std::cout << m1->calculaTotal() << "\n";

	delete rest;
	
	
	

}
