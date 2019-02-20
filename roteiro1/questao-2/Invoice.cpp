#ifndef INVOICE_CPP
#define INVOICE_CPP

#include "Invoice.hpp"

Invoice::Invoice()
{
    numero = 0;
    quantComprada = 0;
    preco = 0;
    descricao = "";
}

Invoice::Invoice(int n, int q, float p, std::string desc)
{
    setNumero(n);
    setQuantComprada(q);
    setPreco(p);
    setDescricao(desc);

}

void Invoice::setNumero(int n)
{
    numero = n;
}
void Invoice::setQuantComprada(int q)
{
    quantComprada = q > 0 ? q : 0;
}
void Invoice::setDescricao(std::string desc)
{
    descricao = desc;
}
void Invoice::setPreco(float p)
{
    preco = p > 0 ? p : 0;
}

int Invoice::getNumero()
{
    return numero;
}
int Invoice::getQuantComprada()
{
    return quantComprada;
}
std::string Invoice::getDescricao()
{
    return descricao;
}
float Invoice::getPreco()
{
    return preco;
}

float Invoice::getInvoiceAmount()
{
    return quantComprada * preco;
}

#endif