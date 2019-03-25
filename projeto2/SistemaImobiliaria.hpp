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
        std::vector<Imovel*> getImoveisPorBairro(std::string bairro);
        std::vector<Imovel*> getImoveisPorValor(double min, double max);
        std::vector<Imovel*> getImoveisPorCidade(std::string cidade);
	std::vector<Imovel*> getImoveisPorTitulo(std::string titulo);
	std::vector<Imovel*> getImoveisPorDisponibilidade(char disp);
	void exibirImoveis(std::vector<Imovel*> im);
        virtual ~SistemaImobiliaria();
};

#endif

