#ifndef MENU_HPP
#define MENU_HPP

#include "Imoveis.hpp"
#include "SistemaImobiliaria.hpp"
#include <vector>

class Menu
{
    public:
        int menuEscolher();
        void menuCadastrar(SistemaImobiliaria &sist);
        void menuListar(SistemaImobiliaria &sist);

};



#endif // MENU_HPP
