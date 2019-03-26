#ifndef GERENTEDEPERSISTENCIA_HPP
#define GERENTEDEPERSISTENCIA_HPP

#include <list>
#include <vector>
#include "Imoveis.hpp"
#include "Casa.hpp"
#include "Apartamento.hpp"
#include "Terreno.hpp"

class GerenteDePersistencia
{
    public:
        std::vector<Imovel*> recuperaListaImoveis();
        void salvaListaImoveis(std::vector<Imovel*> im);
};


#endif
