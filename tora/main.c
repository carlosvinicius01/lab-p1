#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "menuimobiliaria.h"
#include "imoveis.h"
int main(){
    Casa casa[50] = {};
    Terreno terreno[50] = {};
    Apartamento apartamento[50] = {};
    int num = 0;

    lerImoveis(casa,50,apartamento,50,terreno,50,"teste.txt");

    printf("----------------------IMOBILIARIA----------------------\n");
    while(1){
        num = displayMenu();
        switch(num){
            case 1:
                subMenuCadastro(casa, 50,apartamento,50,terreno,50);
                break;
            case 2:
                printImoveis(casa, 50,apartamento,50,terreno,50,TODOS,'\0');
                system("pause");
                system("cls");
                break;
            case 3:
                subMenuBusca(casa, 50,apartamento,50,terreno,50);
                break;
            case 4:
                subMenuEditar(casa, 50,apartamento,50,terreno,50);
                break;
            case 5:
                subMenuExcluir(casa,50,apartamento,50,terreno,50);
                break;
            case 6:
                printf("PRESSIONE UMA TECLA PARA SAIR\n");
                salvarImoveis(casa,50,apartamento,50,terreno,50,"teste.txt");
                return 0;
                break;


        }
    }
    return 0;
}
