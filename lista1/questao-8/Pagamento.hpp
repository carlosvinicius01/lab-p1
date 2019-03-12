#ifndef PAGAMENTO_HPP
#define PAGAMENTO_HPP

#include <string>

class Pagamento
{
private:
    double valorPagamento;
    std::string nomeDoFuncionario;
public:
    void setValorPagamento(double v);
    double getValorPagamento();
    void setNomeDoFuncionario(std::string ndf);
    std::string getNomeDoFuncionario();
};

#endif 