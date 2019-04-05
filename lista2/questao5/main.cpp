#include <iostream>
#include "TestaValidaNumero.hpp"

int main()
{

    int numero;
    TestaValidaNumero *valida = new TestaValidaNumero();

    try
    {
        std::cout << "Numero pra validar: " << "\n";
        std::cin >> numero;
        valida->validaNumero(numero);
    }
    catch (ValorAbaixoException &exc)
    {
        std::cout << "Valor abaixo" << "\n";
    }
    catch (ValorAcimaException &exc)
    {
        std::cout << "Valor acima" << "\n";
    }
    catch (ValorMuitoAcimaException &exc)
    {
        std::cout << "Valor muito acima" << "\n";
    }

    delete valida;
    return 0;
}
