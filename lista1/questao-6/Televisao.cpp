#include "Televisao.hpp"

Televisao::Televisao()
{
    canal = 0;
    volume = 0;
}

int Televisao::getVolume() { return volume; }

int Televisao::getCanal() { return canal; }

void Televisao::aumentarVolume()
{
    volume++;
    if (volume > 100)
        volume = 100;
}

void Televisao::diminuirVolume()
{
    volume--;
    if (volume < 0)
        volume = 0;
}

void Televisao::aumentarCanal()
{
    canal++;
    if (canal > 100)
        canal = 0;
}

void Televisao::diminuirCanal()
{
    canal--;
    if (canal < 0)
        canal = 100;
}

void Televisao::setarCanal(int c)
{
    canal = c;
}