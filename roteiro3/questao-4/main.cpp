#include <iostream>
#include "Funcionario.h"
#include "Assalariado.h"
#include "SistemaGerenciaFolha.h"
#include "Comissionado.h"
#include "Horista.h"

int main()
{
    SistemaGerenciaFolha sist;

    Assalariado *a = new Assalariado();
    Comissionado *b = new Comissionado();
    Horista *c = new Horista();
    a->setNome("n1");
    a->setMatricula(12345);
    a->setSalario(500);
    sist.setFuncionarios(a);

    b->setNome("n2");
    b->setMatricula(85624);
    b->setVendas(100);
    b->setComissao(0.1);
    sist.setFuncionarios(b);

    c->setNome("n3");
    c->setMatricula(54321);
    c->setHoras(100);
    c->setSalarioPorHora(10);
    sist.setFuncionarios(c);




    std::cout << sist.consultaSalarioFuncionario(a) << std::endl;

    std::cout << sist.calculaTotalFolha() << std::endl;

    delete a;
    delete b;
    delete c;

    return 0;
}
