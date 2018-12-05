#include <stdlib.h>
#include <stdio.h>
#include "imoveis.h"
#include <string.h>

int main(){
    Casa casa[8] = {};
    Apartamento apartamento[8] = {};
    Terreno terreno[8] = {};

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

   //salvarImoveis(casa, 8, apartamento, 3, terreno, 2, "opressao.txt");

//   exibirCasas(casa, 8, '\0');
    printImoveis(casa, 8, apartamento, 8, terreno, 8, TERRENO, 'v');
//    imovelPorTitulo(casa, 8, apartamento, 8, terreno, 8, "0");
//    imovelPorBairro(casa, 8, apartamento, 8, terreno, 8, "Mangabeira");
//    imovelPorValor(casa, 8, apartamento, 8, terreno, 8, 270);
}

