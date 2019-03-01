#include <iostream>

#include "RestauranteCaseiro.hpp"
#include "MesaDeRestaurante.hpp"
#include "Pedido.hpp" 

int main()
{
	

	MesaDeRestaurante *m1 = new MesaDeRestaurante;
	MesaDeRestaurante *m2 = new MesaDeRestaurante;

	m1->adicionaPedido(new Pedido(666, 1, "diga nao as drogas", 90.5));
	m1->adicionaPedido(new Pedido(666, 1, "diga nao as drogas", 90.5));
	m1->adicionaPedido(new Pedido(666, 1, "diga nao as drogas", 90.5));
	m1->adicionaPedido(new Pedido(666, 1, "diga nao as drogas", 90.5));
	//m1->adicionaPedido(new Pedido(1001, 2, "bananas", 10.5));

	std::cout << (m1->getPedido(0))->toString() << "\n";
	std::cout << m1->calculaTotal();

	RestauranteCaseiro rest({m1, m2});

	std::cout  << "\n";
	
	rest.adicionaPedido(new Pedido(666, 1, "diga nao as drogas", 90.5), 1);

	std::cout << m2->getPedido(0)->toString();

	

}
