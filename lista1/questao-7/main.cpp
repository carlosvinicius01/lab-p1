#include <iostream>
#include "Pessoa.hpp"

int main()
{

    Pessoa *p1 = new Pessoa("JADILSON");
    Pessoa *p2 = new Pessoa("ADAGLEISER", 23, "9999-9999");

    std::cout << p1->getNome() << " " << p1->getIdade() << " " << p1->getTelefone() << std::endl;
    std::cout << p2->getNome() << " " << p2->getIdade() << " " << p2->getTelefone() << std::endl;

    delete p1; delete p2;

    return 0;
}