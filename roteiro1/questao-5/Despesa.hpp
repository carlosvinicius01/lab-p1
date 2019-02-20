#ifndef DESPESA_HPP
#define DESPESA_HPP

#include<string>

class Despesa
{
	double valor;
	std::string tipoDeGasto;
	public:
        Despesa(std::string t, double v);
		void setTipoDeGasto(std::string t);
		void setValor(double v);
		std::string getTipoDeGasto();
		double getValor();
};

#endif