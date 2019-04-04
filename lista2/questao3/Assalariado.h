#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include "Funcionario.h"

class Assalariado : public Funcionario
{
  private:
    double salario;

  public:
    Assalariado();
    double calculaSalario();
    void setSalario(double s);
};

#endif // ASSALARIADO_H