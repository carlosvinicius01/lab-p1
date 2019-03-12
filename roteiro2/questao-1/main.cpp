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

	m1->adicionaPedido(p1); //iniciando uma mesa já com alguns pedidos
	m1->adicionaPedido(p1);
	m1->adicionaPedido(p2);

	std::cout << (m1->getPedido()[0])->toString() << "\n";
	std::cout << (m1->getPedido()[1])->toString() << "\n\n";


	
	RestauranteCaseiro *rest = new RestauranteCaseiro({m1, m2}); //iniciando restaurante com mesas ja criadas

	rest->adicionaPedido(p2, 1); //adicionando 1 pedido diretamente na mesa 2 atraves da classe RestauranteCaseiro

	std::cout << m2->getPedido()[0]->toString() << "\n";
	std::cout << rest->calculaTotalRestaurante() << "\n";
	rest->getMesa()[0]->zeraPedidos();	
	rest->getMesa()[1]->zeraPedidos();

	std::cout << rest->calculaTotalRestaurante() << "\n";

	delete rest;

}
