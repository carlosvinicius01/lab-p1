#include <iostream>
#include "Despesa.hpp"
#include "ControleDeGastos.hpp"

int main()
{
    ControleDeGastos c1;
    c1.setDespesa(Despesa("almoço", 10));
    c1.setDespesa(Despesa("lanchinho", 5));

    std::cout << c1.calculaTotalDespesas() << "\n";

    std::cout << c1.existeDespesaDoTipo("jantar") << "\n";
    std::cout << c1.existeDespesaDoTipo("lanchinho") << "\n";
}