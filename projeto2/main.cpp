#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "imoveis.hpp"

int main()
{
    std::vector<Imovel*> imovel; // lista dinamica de imoveis
    
    imovel.push_back(new Casa); //adicionando mais imoveis
    imovel.push_back(new Apartamento);

    imovel[0]->exibir(); //vai exibir uma casa zerada
    imovel[1]->exibir(); // vai exibir um apartamento zerado

}