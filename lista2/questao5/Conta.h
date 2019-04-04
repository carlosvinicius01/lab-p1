#ifndef CONTA_H
#define CONTA_H

#include "IConta.h"
#include <string>

class Conta : public IConta
{
  protected:
    std::string nomeCliente, numeroConta;
    double salarioMensal, saldo, limite;

  public:
    Conta(std::string n, std::string c, double sm, double s);
    Conta();
    void setNomeCliente(std::string n);
    void setNumeroConta(std::string c);
    void setSalarioMensal(double sm);
    void setSaldo(double s);
    void setLimite(double l);
    std::string getNomeCliente();
    std::string getNumeroconta();
    double getSalarioMensal();
    double getSaldo();
    double getLimite();
    virtual void definirLimite();
    void sacar(double valor);
    void depositar(double valor);
};

#endif // CONTA_H