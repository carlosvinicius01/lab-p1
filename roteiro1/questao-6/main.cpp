#include <iostream>
#include "Pagamento.hpp"
#include "ControleDePagamentos.hpp"


int main()
{
    ControleDePagamentos *cp = new ControleDePagamentos;
    Pagamento p1, p2;
    p1.setNomeDoFuncionario("Maria");
    p1.setValorPagamento(300);
    p2.setNomeDoFuncionario("Fulano");
    p2.setValorPagamento(666);

    cp->setPagamento(p1);
    cp->setPagamento(p2);

    std::cout << cp->existePagamentoParaFuncionario("Cicrano") << "\n";
    std::cout << cp->existePagamentoParaFuncionario("Maria") << "\n";
    std::cout << cp->calculaTotalDePagamentos() << "\n";
}