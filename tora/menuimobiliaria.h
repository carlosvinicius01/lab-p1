#ifndef MENUIMOBILIARIA_H_INCLUDED
#define MENUIMOBILIARIA_H_INCLUDED
#include "imoveis.h"
#include <string.h>


int displayMenu(){


    int num;
    printf("1.CADASTRAR IMOVEIS\n2.LISTAR IMOVEIS\n3.BUSCAR IMOVEIS\n4.EDITAR IMOVEIS\n5.REMOVER IMOVEIS\n6.SAIR\n");

    scanf("%d",&num);

    system("cls");
    return num;

}



int subMenuBusca(Casa casa[],
                  int nCasas,
                  Apartamento apartamento[],
                  int nApartamentos,
                  Terreno terreno[],
                  int nTerrenos){

    int num = 0;
    double valor;
    char titulo[51];

    printf("1.BUSCAR POR TITULO\n2.BUSCAR POR BAIRRO\n3.BUSCAR POR VALOR\n4.BUSCAR POR TIPO\n5.BUSCAR POR DISPONIBILIDADE\n6.VOLTAR\n");
    scanf("%d%*c",&num);
    switch(num){
        case 1:
        printf("digite o titulo: ");
        fgets(titulo,51,stdin);
        titulo[strlen(titulo)-1] = '\0';
        imovelPorTitulo(casa,50,apartamento,50,terreno,50,titulo);
        system("pause");
        break;
        case 2:
        printf("digite o bairro: ");
        fgets(titulo,51,stdin);
        titulo[strlen(titulo)-1] = '\0';
        imovelPorBairro(casa,50,apartamento,50,terreno,50,titulo);
        system("pause");
        break;
        case 3:
        printf("digite o valor: ");
        scanf("%lf",&valor);
        titulo[strlen(titulo)-1] = '\0';
        imovelPorValor(casa,50,apartamento,50,terreno,50,valor);
        system("pause");
        break;
        case 4:
        printf("digite o tipo: ");
        fgets(titulo,51,stdin);
        titulo[strlen(titulo)-1] = '\0';
        printImoveis(casa, 50,apartamento,50,terreno,50,TODOS,'\0');
        system("pause");
        break;
        case 5:
        printf("digite a disponibilidade: ");
        fgets(titulo,51,stdin);
        titulo[strlen(titulo)-1] = '\0';
        printImoveis(casa, 50,apartamento,50,terreno,50,TODOS,titulo);
        system("pause");
        break;
    }

    system("cls");

    return num;

}

void subMenuCadastro(){

    int num = 0;

    printf("1.CADASTRAR CASA\n2.CADASTRAR APARTAMENTO\n3.CADASTRAR TERRENO\n4.VOLTAR\n");
    scanf("%d",&num);
    //faz aquele switch case bolado colocando as funções toradas;

    system("cls");


}


int subSair(){

 int num;
    system("cls");

    return num;

}


#endif // MENUIMOBILIARIA_H_INCLUDED
