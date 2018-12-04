#include <stdio.h>
#include <stdlib.h>
#include "menuimobiliaria.h"
#include "imoveis.h"
int main(){
    Casa casa[50] = {};
    Terreno terreno[50] = {};
    Apartamento apartamento[50] = {};
    int num = 0;
    int sub,x;


        for(int i = 0; i < 8; i++){
        strcpy(casa[i].tituloAnuncio, "CASA");
        casa[i].tituloAnuncio[4] = i+49;
        casa[i].tituloAnuncio[5] = '\0';
        casa[i].ativo = 1;
        casa[i].valor = i*40;
        strcpy(casa[i].endereco.bairro,"Mangabeira");
        casa[i].disponivel = i%2==0 ? 'v':'a';
    }


    for(int i = 0; i < 8; i++){
        strcpy(apartamento[i].tituloAnuncio, "AP");
        apartamento[i].tituloAnuncio[2] = i+49;
        apartamento[i].tituloAnuncio[3] = '\0';
        apartamento[i].valor = i*40;
        apartamento[i].ativo = 1;
        apartamento[i].disponivel = i%2==0 ? 'v':'a';
    }

    for(int i = 0; i < 8; i++){
        strcpy(terreno[i].tituloAnuncio, "TER");
        terreno[i].tituloAnuncio[3] = i+49;
        terreno[i].tituloAnuncio[4] = '\0';
        terreno[i].valor = i*40;
        terreno[i].ativo = 1;
        terreno[i].disponivel = i%2==0 ? 'v':'a';
    }

    printf("----------------------IMOBILIARIA----------------------\n");
    while(1){
        num = displayMenu();
        switch(num){
            case 1:
                subMenuCadastro();
                break;
            case 2:
                printImoveis(casa, 50, apartamento, 50, terreno, 50, TERRENO, 'v');
                printImoveis(casa, 50, apartamento, 50, terreno, 50, TERRENO, 'a');
                printf("1 para voltar ao menu");
                scanf("%d",&x);
                system("clear");
                break;
            case 3:
                subMenuBusca();
                break;
            case 4:
                //editar;
                break;
            case 5:
                //remover;
                break;
            case 6:
                return 0;
                break;


        }
    }
    return 0;
}
