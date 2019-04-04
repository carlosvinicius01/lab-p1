#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include "Funcionario.h"

class Comissionado : public Funcionario
{
  private:
    double vendasSemanais, percentualComissao;

  public:
    double calculaSalario();
    void setVendas(double v);
    void setComissao(double c);
};

#endif // COMISSIONADO_H