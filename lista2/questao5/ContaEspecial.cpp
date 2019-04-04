
#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(std::string n, std::string c, double sm, double s)
{
    setNomeCliente(n);
    setNumeroConta(c);
    setSalarioMensal(sm);
    setSaldo(s);
}

void ContaEspecial::definirLimite() { setLimite(getSalarioMensal() * 3); }