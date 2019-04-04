#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"
#include "SaldoNaoDisponivelException.h"

int main()
{
    Conta *c1 = new Conta("Jeremias", "2222-2", 2500, 1750);
    try
    {
        c1->sacar(5000);
    }
    catch (SaldoNaoDisponivelException &e)
    {
        std::cout << "Saldo insuficiente\n";
    }

    delete c1;
    return 0;
}