#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

int main()
{
    ContaEspecial c2("Betim", "8888-8888", 20000, 100000);
    Conta c1("Betao", "8888-9999", 2500, 1750);
    c1.sacar(500);
    
    std::cout << c1.getSaldo() << std::endl;
    
    c1.depositar(1000);
    std::cout << c1.getSaldo() << std::endl;
    
    c2.depositar(5000);
    c2.sacar(1000000);

    return 0;
}