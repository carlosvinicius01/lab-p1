#ifndef CONTROLEDEPAGAMENTOS_CPP
#define CONTROLEDEPAGAMENTOS_CPP

#include "ControleDeGastos.hpp"

void ControleDePagamentos::setPagamentos(Pagamento *p)
{
    pagamentos.push_back(p);
}

double ControleDePagamentos::calculaTotalDePagamentos()
{
    double soma = 0;
    for (Pagamento *p : pagamentos)
    {
        soma += p->getValorPagamento();
    }
    return soma;
};

bool ControleDePagamentos::existePagamentoParaFuncionario(std::string nomeFuncionario)
{

    for (Pagamento *p : pagamentos)
    {
        if (p->getNomeDoFuncionario() == nomeFuncionario)
            return true;
    }

    return false;
}

#endif // CONTROLEDEPAGAMENTOS_H