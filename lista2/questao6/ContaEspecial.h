#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "Conta.h"

class ContaEspecial : public Conta
{
  public:
    ContaEspecial(std::string n, std::string c, double sm, double s);
    void definirLimite();
};

#endif // CONTAESPECIAL_H
