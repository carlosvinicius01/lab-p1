#include "Conta.h"
#include <iostream>
Conta::Conta(std::string n, std::string c, double sm, double s)
{
    setNomeCliente(n);
    setNumeroConta(c);
    setSalarioMensal(sm);
    setSaldo(s);
}

Conta::Conta() {}

void Conta::setNomeCliente(std::string n) { nomeCliente = n; }

void Conta::setNumeroConta(std::string c) { numeroConta = c; }

void Conta::setSalarioMensal(double sm) { salarioMensal = sm; }
void Conta::setSaldo(double s) { saldo = s; }
void Conta::setLimite(double l) { limite = l; }

std::string Conta::getNomeCliente() { return nomeCliente; }

std::string Conta::getNumeroconta() { return numeroConta; }

double Conta::getSalarioMensal() { return salarioMensal; }

double Conta::getSaldo() { return saldo; }

double Conta::getLimite() { return limite; }

void Conta::definirLimite() { setLimite(getSalarioMensal() * 3); }

void Conta::sacar(double valor)
{
    if (valor < getSaldo())
    {
        setSaldo(getSaldo() - valor);
        std::cout << "Saque Realizado com sucesso\n";
    }
    else
        std::cout << "Saldo Insuficiente\n";
}
void Conta::depositar(double valor) { setSaldo(getSaldo() + valor); }