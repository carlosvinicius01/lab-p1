#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <string>

class Pedido
{
	public:
		int numero, quantidade;
		std::string descricao;
		double preco;

		Pedido(int n, int q, std::string d, double p);

};

#endif
