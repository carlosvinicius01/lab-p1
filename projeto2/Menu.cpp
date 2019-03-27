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
	<< "5 - Editar um Imovel\n"
    << "6 - Salvar os dados\n"
    << "7 - Sair";
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
    << "3 - Terreno\n"
	<< "4 - Voltar";
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
	//case 4:
		
		//break;
    }
}

void Menu::menuListar(SistemaImobiliaria &sist)
{
	int menuChoice;
    std::cout << "\nListar:" << std::endl
    << "1 - Todos os Imoveis Disponiveis\n"
    << "2 - Imoveis por tipo\n"
    << "3 - Imoveis por Categoria\n"
	<< "4 - Voltar";
    std::cin >> menuChoice;
    std::cin.ignore();

	switch (menuChoice)
    {
    case 1:
		{
			int i = 0;
			std::vector <Imovel *> im2;
			im2 = sist.getImoveis();
			for(auto p : im2)
			{
				std::cout << i << " " << p->getTituloAnuncio() << std::endl;
				i++;
			}
			
        	break;
		}
    case 2:
		{
			std::cout << "\nListar:" << std::endl
			<< "1 - Casa\n"
			<< "2 - Apartamento\n"
			<< "3 - Terreno\n"
			<< "4 - Voltar";
			std::cin >> menuChoice;
			std::cin.ignore();
			char op[3] = {'c','a','t'};
			std::cout << "\n";
        	sist.exibirImoveis(sist.getImoveisPorTipo(op[menuChoice-1], sist.getImoveis()));
        	break;
		}
    case 3:
		{
        	std::cout << "\nListar:" << std::endl
			<< "1 - Venda\n"
			<< "2 - Aluguel\n"
			<< "3 - Voltar";
			std::cin >> menuChoice;
			std::cin.ignore();
			char op[2] = {'v','a'};
			std::cout << "\n";
        	sist.exibirImoveis(sist.getImoveisPorDisponibilidade(op[menuChoice-1], sist.getImoveis()));
        	break;
        }
	}
}
void Menu::menuBuscar(SistemaImobiliaria &sist)
{
    int menuChoice;
    std::cout << "\nBuscar:" << std::endl
    << "1 - Imoveis por Bairro\n"
    << "2 - Imoveis por Cidade\n"
    << "3 - Imoveis por Título\n"
	<< "4 - Imoveis por valor ou menor que\n"
	<< "5 - Voltar";
    std::cin >> menuChoice;
    std::cin.ignore();
	switch (menuChoice)
    {
    case 1:
        {
			std::string bairr;
			std::cout << "Nome do Bairro: \n";
			std::getline(std::cin, bairr);
			std::cout << "\n";
			sist.exibirImoveis(sist.getImoveisPorBairro(bairr , sist.getImoveis()));
        	break;
		}    
	case 2:
		{
        	std::string city;
			std::cout << "Nome da Cidade: \n";
			std::getline(std::cin, city);
			std::cout << "\n";
			sist.exibirImoveis(sist.getImoveisPorCidade(city, sist.getImoveis()));
        	break;
        }
    case 3:
        {
			std::string title;
			std::cout << "Titulo: \n";
			std::getline(std::cin, title);
			std::cout << "\n";
			sist.exibirImoveis(sist.getImoveisPorTitulo(title, sist.getImoveis()));
			break;
		}    
	case 4:
		{
			double maior, menor;
			std::cout << "Maior que: \n";
			std::cin >> menor;
			std::cout << "Menor que: \n";
			std::cin >> maior;
			std::cout << "\n";
			sist.exibirImoveis(sist.getImoveisPorValor(menor, maior, sist.getImoveis()));
			break;
		}	
	}
	
}

void Menu::menuRemover(SistemaImobiliaria &sist)
{	int indice;	
	std::cout << "Indice a ser removido: \n";
	std::cin >> indice;
	sist.setImoveis(sist.remover(sist.getImoveis(), indice));
}

void Menu::menuInicio(SistemaImobiliaria &sist, GerenteDePersistencia &g)
{	
	while(1)
	{
		int menuChoice;
		menuChoice = menuEscolher();
		if(menuChoice == 7) break;
		switch(menuChoice)
		{
		case 1:
								
				menuCadastrar(sist);
				
				break;
		case 2:
				
				menuListar(sist);
				
				break;
		case 3:
				
				menuBuscar(sist);
				
				break;
		case 4:
				
				menuRemover(sist);
				
				break;
		case 5:
				break;
		case 6:
				g.salvaListaImoveis(sist.getImoveis());
				break;
		}
		
	}
}



















#endif // MENU_CPP
