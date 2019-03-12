#include <iostream>
#include "Relogio.hpp"

int main()
{
    Relogio *r1 = new Relogio(1, 0, 0);
    Relogio *r2 = new Relogio(0, 0, 0);

    r2->setHora(23);

    for (int i = 0; i < 6000; i++)
    {
        std::cout << r2->getHora() << ":" << r2->getMinuto() << ":" << r2->getSegundo() << "\n";
        r2->avancarHorario();
    }

    std::cout << "\n\n\n\n";

    for (int i = 0; i < 1200; i++)
    {
        r1->avancarHorario();
        std::cout << "  " << r1->getHora() << ":" << r1->getMinuto() << ":" << r1->getSegundo() << "\n";
    }
}