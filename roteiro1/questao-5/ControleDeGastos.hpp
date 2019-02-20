#ifndef CONTROLEDEGASTOS_HPP
#define CONTROLEDEGASTOS_HPP

#include<vector>
#include "Despesa.hpp"

class ControleDeGastos 
{
	std::vector<Despesa> despesas;
	public:
	void setDespesa(Despesa d);
	double calculaTotalDespesas();
	bool existeDespesaDoTipo(std::string t);

};

#endif