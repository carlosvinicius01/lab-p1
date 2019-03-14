#include <iostream>
#include "ControleDeGastos.hpp"
#include "Pagamento.hpp"

int main()
{
    Pagamento *p1 = new Pagamento();
    Pagamento *p2 = new Pagamento();
    Pagamento *p3 = new Pagamento();
    ControleDePagamentos *c1 = new ControleDePagamentos();
    c1->setPagamentos(p1);
    c1->setPagamentos(p2);
    c1->setPagamentos(p3);

    p1->setValorPagamento(10);
    p1->setNomeDoFuncionario("Adilson");
    
    p2->setValorPagamento(20);
    p2->setNomeDoFuncionario("Jodalson");

    p3->setValorPagamento(30);
    p3->setNomeDoFuncionario("Illuminati");

    std::cout << c1->calculaTotalDePagamentos() << "\n";
}