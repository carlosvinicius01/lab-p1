#ifndef CONTROLEDEPAGAMENTOS_CPP
#define CONTROLEDEPAGAMENTOS_CPP

#include "ControleDePagamentos.hpp"

void ControleDePagamentos::setPagamento(Pagamento p) { pagamentos.push_back(p); }
double ControleDePagamentos::calculaTotalDePagamentos()
{
    double soma = 0;
    for (Pagamento p : pagamentos)
    {
        soma += p.getValorPagamento();
    }
}

bool ControleDePagamentos::existePagamentoParaFuncionario(std::string n)
{
    for (Pagamento p : pagamentos)
    {
        if (p.getNomeDoFuncionario() == n)
            return true;
    }
    return false;
}

#endif