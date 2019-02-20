#ifndef PAGAMENTO_CPP
#define PAGAMENTO_CPP

#include "Pagamento.hpp"

void Pagamento::setValorPagamento(double v) { valorPagamento = v; }
void Pagamento::setNomeDoFuncionario(std::string n) { nomeDoFuncionario = n; }
double Pagamento::getValorPagamento() { return valorPagamento; }
std::string Pagamento::getNomeDoFuncionario() { return nomeDoFuncionario; }

#endif