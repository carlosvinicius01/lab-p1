#ifndef HORISTA_H
#define HORISTA_H

#include "Funcionario.h"

class Horista : public Funcionario
{
  private:
    double salarioPorHora, horasTrabalhadas;

  public:
    double calculaSalario();
    void setSalarioPorHora(double s);
    void setHoras(double h);
};

#endif // HORISTA_H