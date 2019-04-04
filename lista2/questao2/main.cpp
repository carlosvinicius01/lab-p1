#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

int main()
{
    Conta *c1 = new Conta("Jeremias", "2222-2", 2500, 1750);
    ContaEspecial *c2 = new ContaEspecial("Joao", "1234-5", 20000, 100000);
    c1->sacar(500);
    std::cout << c1->getSaldo() << std::endl;
    c1->depositar(1000);
    std::cout << c1->getSaldo() << std::endl;
    c1->definirLimite();
    c2->depositar(5000);
    c2->sacar(1000);
    c2->definirLimite();
    delete c1;
    delete c2;
    return 0;
}