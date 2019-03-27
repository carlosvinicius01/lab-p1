#ifndef MENU_CPP
#define MENU_CPP

#include "Menu.hpp"
#include "Terreno.hpp"
#include "Casa.hpp"
#include "Apartamento.hpp"
#include "Imoveis.hpp"
#include "SistemaImobiliaria.hpp"
#include <iostream>

int Menu::menuEscolher()
{
    int menuChoice;

    std::cout << "\nMenu:" << std::endl
    << "1 - Cadastrar\n"
    << "2 - Listar\n"
    << "3 - Busca\n"
    << "4 - Remover um imovel\n"
    << "5 - Salvar os dados\n"
    << "6 - Sair\n";
    std::cin >> menuChoice;

    return menuChoice;

}

void Menu::menuCadastrar(SistemaImobiliaria &sist)
{
    Imovel *p;
    int menuChoice;
    std::cout << "\nCadastrar:" << std::endl
    << "1 - Casa\n"
    << "2 - Apartamento\n"
    << "3 - Terreno\n";
    std::cin >> menuChoice;
    std::cin.ignore();

    switch (menuChoice)
    {
    case 1:
        p = new Casa();
        p->cadastrar();
        sist.cadastraImovel(p);
        break;
    case 2:
        p = new Apartamento();
        p->cadastrar();
        sist.cadastraImovel(p);
        break;
    case 3:
        p = new Terreno();
        p->cadastrar();
        sist.cadastraImovel(p);
        break;
    }
}

void Menu::menuListar(SistemaImobiliaria &sist)
{
	int menuChoice;
    std::cout << "\nListar:" << std::endl
    << "1 - Todos os Imoveis Disponiveis\n"
    << "2 - Imoveis por tipo\n"
    << "3 - Imoveis por Categoria\n";
    std::cin >> menuChoice;
    std::cin.ignore();

	switch (menuChoice)
    {
    case 1:
		{
			std::vector <Imovel *> im2;
			im2 = sist.getImoveis();
			for(auto p : im2)
			{
				std::cout << p->getTituloAnuncio() << std::endl;;
			}
		
        	break;
		}
    case 2:
		{
			std::cout << "\nListar:" << std::endl
			<< "1 - Casa\n"
			<< "2 - Apartamento\n"
			<< "3 - Terreno\n";
			std::cin >> menuChoice;
			std::cin.ignore();
			char op[3] = {'c','a','t'};
        	sist.exibirImoveis(sist.getImoveisPorTipo(op[menuChoice-1], sist.getImoveis()));
        	break;
		}
    case 3:
        	std::cout << "\nListar:" << std::endl
			<< "1 - VENDA\n"
			<< "2 - ALUGUEL\n";
			std::cin >> menuChoice;
			std::cin.ignore();
			char op[2] = {'v','a'};
        	sist.exibirImoveis(sist.getImoveisPorDisponibilidade(op[menuChoice-1], sist.getImoveis()));
        	break;
        break;
    }
}
#endif // MENU_CPP
