#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H

#include "Funcionario.h"
#include <vector>

class SistemaGerenciaFolha
{
  private:
    std::vector<Funcionario *> funcionarios;

  public:
    void setFuncionarios(Funcionario *func);
    double calculaTotalFolha();
    double consultaSalarioFuncionario(Funcionario *func);
};

#endif // SISTEMAGERENCIAFOLHA_H