#ifndef CONTA_H
#define CONTA_H

#include "IConta.h"
#include <string>

class Conta : public IConta
{
    std::string nome;
    double salarioMensal, saldo, limite;
    int numeroConta;

    void setSalarioMensal(double);
    void setSaldo(double);
    void setLimite(double);
    void setNumeroConta(int);
    void setNome(std::string);

    double getSalarioMensal();
    double getSaldo();
    double getLimite();
    int getNumeroConta();
    std::string getNome();

    void sacar(double);
    void depositar(double);
    void definirLimite();
};

#endif