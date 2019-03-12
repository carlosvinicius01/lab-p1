#ifndef CONTROLEDEGASTOS_HPP
#define CONTROLEDEGASTOS_HPP


#include "Pagamento.hpp"
#include <vector>

class ControleDePagamentos
{
private:
    std::vector<Pagamento*> pagamentos;
public:
    void setPagamentos(Pagamento *p);
    double calculaTotalDePagamentos();
    bool existePagamentoParaFuncionario(std::string nomeFuncionario);

};

#endif // PAGAMENTO_H