#ifndef SISTEMAIMOBILIARIA_HPP
#define SISTEMAIMOBILIARIA_HPP


#include <list>
#include <vector>
#include "Imoveis.hpp"
#include "GerenteDePersistencia.hpp"


class SistemaImobiliaria
{
    std::vector<Imovel*> imoveis;
    GerenteDePersistencia gerente;

    public:
        void cadastraImovel(Imovel* imovel);
        std::vector<Imovel*> getImoveis();
        std::vector<std::string> getDescricaoImoveis();
        std::vector<Imovel*> getImoveisPorTipo(int tipo);
        std::vector<Imovel*> getImoveisParaAlugarPorBairro(std::string bairro);
        std::vector<Imovel*> getImoveisParaVenderPorBairro(std::string bairro);
        std::vector<Imovel*> getImoveisPorCidade(std::string cidade);

        virtual ~SistemaImobiliaria();
};

#endif

