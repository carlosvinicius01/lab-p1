#ifndef PAGAMENTO_HPP
#define PAGAMENTO_HPP

#include <string>

class Pagamento
{
	double valorPagamento;
	std::string nomeDoFuncionario;

	public:
		void setValorPagamento(double v);
		void setNomeDoFuncionario(std::string n);
		double getValorPagamento();
		std::string getNomeDoFuncionario();
};

#endif