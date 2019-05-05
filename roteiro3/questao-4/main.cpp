#include <iostream>
#include "Funcionario.h"
#include "Assalariado.h"
#include "SistemaGerenciaFolha.h"
#include "Comissionado.h"
#include "Horista.h"

int main()
{
    SistemaGerenciaFolha sist;

    Assalariado *f1 = new Assalariado();
    f1->setNome("Joao");
    f1->setMatricula(12345);
    f1->setSalario(500);

    Comissionado *c1 = new Comissionado();
    c1->setNome("Jose");
    c1->setMatricula(85624);
    c1->setVendas(100);
    c1->setComissao(0.1);

    Horista *h1 = new Horista();
    h1->setNome("Jeremias");
    h1->setMatricula(54321);
    h1->setHoras(100);
    h1->setSalarioPorHora(10);

    sist.setFuncionarios(c1);
    sist.setFuncionarios(f1);
    sist.setFuncionarios(h1);

    std::cout << sist.consultaSalarioFuncionario(c1) << std::endl;

    std::cout << sist.calculaTotalFolha() << std::endl;
    return 0;
}