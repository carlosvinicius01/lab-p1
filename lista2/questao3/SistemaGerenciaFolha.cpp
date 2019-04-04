#include "SistemaGerenciaFolha.h"

void SistemaGerenciaFolha::setFuncionarios(Funcionario *func)
{
    funcionarios.push_back(func);
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(Funcionario *func)
{
    double salario;
    for (Funcionario *f : funcionarios)
    {
        if (f->getMatricula() == func->getMatricula())
            salario = f->calculaSalario();
    }
    return salario;
}

double SistemaGerenciaFolha::calculaTotalFolha()
{
    double total;

    for (Funcionario *f : funcionarios)
    {
        total += f->calculaSalario();
    }
    return total;
}