#ifndef PAGAMENTO_CPP
#define PAGAMENTO_CPP
#include "Pagamento.hpp"




void Pagamento::setValorPagamento(double v)
{
    valorPagamento = v;
}

double Pagamento::getValorPagamento()
{
    return valorPagamento;
}

void Pagamento::setNomeDoFuncionario(std::string ndf)
{
    nomeDoFuncionario = ndf;
}

std::string Pagamento::getNomeDoFuncionario()
{
    return nomeDoFuncionario;
}

#endif // PAGAMENTO_H

