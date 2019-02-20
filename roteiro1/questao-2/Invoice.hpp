#ifndef INVOICE_HPP
#define INVOICE_HPP

#include "Invoice.hpp"
#include <iostream>
#include <string>

class Invoice
{
    int numero, quantComprada;
    float preco;
    std::string descricao;

  public:
    Invoice();
    Invoice(int n, int q, float p, std::string desc);
    void setNumero(int n);
    void setQuantComprada(int q);
    void setPreco(float p);
    void setDescricao(std::string desc);

    int getNumero();
    int getQuantComprada();
    std::string getDescricao();
    float getPreco();

    float getInvoiceAmount();
};
#endif
