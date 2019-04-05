#ifndef TESTAVALIDANUMERO_HPP
#define TESTAVALIDANUMERO_HPP

#include <exception>
#include "ValorAbaixoException.hpp"
#include "ValorAcimaException.hpp"
#include "ValorMuitoAcimaException.hpp"


class TestaValidaNumero
{
private:
    int numb;
public:
    void validaNumero(int num);

};

#endif // TESTAVALIDANUMERO_HPP
