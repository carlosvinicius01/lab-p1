#ifndef TESTAVALIDANUMERO_CPP
#define TESTAVALIDANUMERO_CPP

#include "TestaValidaNumero.hpp"

void TestaValidaNumero::validaNumero(int num)
{
    if(num <= 0)
    {
        ValorAbaixoException exc;
        throw exc;
    };
    if(num > 100 && num < 1000)
    {
        ValorAcimaException exc;
        throw exc;
    };
    if(num > 1000)
    {
        ValorMuitoAcimaException exc;
        throw exc;
    };
}


#endif // TESTAVALIDANUMERO_CPP
