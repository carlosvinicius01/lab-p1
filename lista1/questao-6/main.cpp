#include <iostream>
#include "Televisao.hpp"

int main()
{
    Televisao t1 = Televisao();

    std::cout << t1.getVolume() << " " << t1.getCanal() << "\n";

    t1.aumentarCanal();
    t1.aumentarVolume();

    t1.aumentarCanal();
    t1.aumentarVolume();

    t1.aumentarVolume();

    std::cout << t1.getVolume() << " " << t1.getCanal() << "\n";

    t1.diminuirVolume();
    t1.diminuirVolume();
    t1.diminuirVolume();
    t1.diminuirVolume();
    t1.diminuirCanal();
    t1.diminuirCanal();
    t1.diminuirCanal();
    t1.diminuirCanal();

    std::cout << t1.getVolume() << " " << t1.getCanal() << "\n";
}