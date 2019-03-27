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
	void setImoveis(std::vector<Imovel*> im);
        std::vector<std::string> getDescricaoImoveis();
        std::vector<Imovel*> getImoveisPorTipo(char tipo, std::vector<Imovel*> imvs);
        std::vector<Imovel*> getImoveisPorBairro(std::string bairro, std::vector<Imovel*> imvs);
        std::vector<Imovel*> getImoveisPorValor(double min, double max, std::vector<Imovel*> imvs);
        std::vector<Imovel*> getImoveisPorCidade(std::string cidade, std::vector<Imovel*> imvs);
		std::vector<Imovel*> getImoveisPorTitulo(std::string titulo, std::vector<Imovel*> imvs);
		std::vector<Imovel*> getImoveisPorDisponibilidade(char disp, std::vector<Imovel*> imvs);
		void exibirImoveis(std::vector<Imovel*> im);
		std::vector<Imovel *>  remover(std::vector<Imovel *> im, int i);

        virtual ~SistemaImobiliaria();
};

#endif

