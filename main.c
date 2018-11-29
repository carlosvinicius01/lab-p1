#include <stdlib.h>
#include <stdio.h>
#include "imoveis.h"
#include <string.h>

int main(){
    Casa casa[8] = {};
    Apartamento apartamento[3] = {};

    strcpy(casa[0].tituloAnuncio, "CASA1");
    casa[0].disponivel = 'a';
    strcpy(casa[1].tituloAnuncio, "CASA2");
    casa[1].disponivel = 'a';
    strcpy(casa[2].tituloAnuncio, "CASA3");
    casa[2].disponivel = 'v';
    strcpy(casa[3].tituloAnuncio, "CASA4");
    casa[3].disponivel = 'v';
    strcpy(casa[4].tituloAnuncio, "CASA5");
    casa[4].disponivel = 'a';
    strcpy(casa[5].tituloAnuncio, "CASA6");
    casa[5].disponivel = 'v';
    strcpy(casa[6].tituloAnuncio, "CASA7");
    casa[6].disponivel = 'a';
    strcpy(casa[7].tituloAnuncio, "CASA8");
    casa[7].disponivel = 'a';

//    printCasa(&casa[6]);

   // lerImoveis(casa, 2, apartamento, 3, NULL, 0, "opressao.txt");

   exibirCasas(casa, 8, 'a');

}
