#include "Relogio.hpp"

Relogio::Relogio(int h, int m, int s)
{
        setHora(h);
        setMinuto(m);
        setSegundo(s);
};

void Relogio::setHora(int h)
{
    hora = h;
};

int Relogio::getHora()
{
  return hora;
};

void Relogio::setMinuto(int m)
{
  minuto = m;
};

int Relogio::getMinuto()
{
  return minuto;
};

void Relogio::setSegundo(int s)
{
    segundo = s;
};

int Relogio::getSegundo()
{
    return segundo;
};

void Relogio::avancarHorario()
{
    segundo++;
    segundo == 60 ? (segundo=0, minuto++):0;
    minuto == 60 ? (minuto=0, hora++):0;
    hora == 24 ? (hora=0):0; 
};
