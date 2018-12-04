#ifndef MENUIMOBILIARIA_H_INCLUDED
#define MENUIMOBILIARIA_H_INCLUDED
#include "imoveis.h"



int displayMenu(){


    int num;
    printf("1.CADASTRAR IMOVEIS\n2.LISTAR IMOVEIS\n3.BUSCAR IMOVEIS\n4.EDITAR IMOVEIS\n5.REMOVER IMOVEIS\n6.SAIR\n");

    scanf("%d",&num);

    system("clear");
    return num;

}



int subMenuBusca(){


    int num = 0;

    printf("1.BUSCAR POR TITULO\n2.BUSCAR POR BAIRRO\n3.BUSCAR POR VALOR\n4.BUSCAR POR TIPO\n5.BUSCAR POR DISPONIBILIDADE\n6.VOLTAR\n");
    scanf("%d",&num);
    switch(num){
        case 1:
        printf("digite o titulo\n");
        printf()



    }

    system("clear");

    return num;

}

void subMenuCadastro(){

    int num = 0;

    printf("1.CADASTRAR CASA\n2.CADASTRAR APARTAMENTO\n3.CADASTRAR TERRENO\n4.VOLTAR\n");
    scanf("%d",&num);
    //faz aquele switch case bolado colocando as funções toradas;

    system("clear");


}


int subSair(){

 int num;
    system("clear");

    return num;

}


#endif // MENUIMOBILIARIA_H_INCLUDED
