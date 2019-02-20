#ifndef CONTROLEDEPAGAMENTOS_HPP
#define CONTROLEDEPAGAMENTOS_HPP

#include <vector>
#include "Pagamento.hpp"

class ControleDePagamentos
{
	std::vector<Pagamento> pagamentos;
	public:
		void setPagamento(Pagamento p);
		double calculaTotalDePagamentos();
		bool existePagamentoParaFuncionario(std::string n);
		
};

#endif