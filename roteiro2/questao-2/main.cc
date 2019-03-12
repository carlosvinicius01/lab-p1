#include <iostream>

#include "CadastroDePessoas.h"
#include "Pessoa.h"
#include "Endereco.h"

int main()
{
    CadastroDePessoas *cp = new CadastroDePessoas();

    Endereco e1("rua 1", "88888-888", "bairro 1", "cidade 1", "estado 1", 10);
    Endereco e2("rua 2", "99999-888", "bairro 2", "cidade 2", "estado 2", 20);

    cp->cadastrarPessoa(new Pessoa("Jailson", e1, "8888-8888"));
    cp->cadastrarPessoa(new Pessoa("Jonicleison", e2, "9999-9999"));

    std::cout << cp->getPessoa()[0]->getNome() << "\n";
    std::cout << cp->getPessoa()[0]->getEndereco().toString() << "\n";
    std::cout << cp->getPessoa()[1]->getNome() << "\n";
    std::cout << cp->getPessoa()[1]->getEndereco().toString() << "\n";

    delete cp;

}