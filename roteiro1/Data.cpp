#include "Data.hpp"
#include <iostream>

Data::Data(int d, int m, int a)
{
    setAno(a);
    setMes(m);
    setDia(d);    
}

void Data::printData()
{
    std::cout << dia << "/" << mes << "/" << ano << "\n";
}

int Data::getDia() { return dia; }
int Data::getMes() { return mes; }
int Data::getAno() { return ano; }

void Data::setDia(int d)
{
    int limite[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (!(d == 29 && mes == 2 && (ano % 4) == 0))
    {
        dia = (d >= 1 && d <= limite[mes - 1]) ? d : 1;
    }
    else
    {
        dia = d;
    }
}

void Data::setMes(int m)
{
    mes = (m >= 1 && m <= 12) ? m : 1;
}

void Data::setAno(int a)
{
    ano = a;
}
