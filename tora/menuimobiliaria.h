#ifndef MENUIMOBILIARIA_H_INCLUDED
#define MENUIMOBILIARIA_H_INCLUDED
#include "imoveis.h"
#include <string.h>


int displayMenu(){


    int num;
    printf("1.CADASTRAR IMOVEIS\n2.LISTAR IMOVEIS\n3.BUSCAR IMOVEIS\n4.EDITAR IMOVEIS\n5.REMOVER IMOVEIS\n6.SAIR\n");

    scanf("%d%*c",&num);

    system("cls");
    return num;

}



void subMenuBusca(Casa casa[],
                  int nCasas,
                  Apartamento apartamento[],
                  int nApartamentos,
                  Terreno terreno[],
                  int nTerrenos){

    int num = 0, disponivel;
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
            imovelPorValor(casa,50,apartamento,50,terreno,50,valor);
            system("pause");
        break;
        case 4:
            printf("digite o tipo: ");
            fgets(titulo,51,stdin);
            titulo[strlen(titulo)-1] = '\0';
            if(strcmp(titulo,"Casa")==0 || strcmp(titulo,"casa")==0)
                printImoveis(casa, 50,apartamento,50,terreno,50,CASA,'\0');
            if(strcmp(titulo,"Apartamento")==0 || strcmp(titulo,"apartamento")==0)
                printImoveis(casa, 50,apartamento,50,terreno,50,APARTAMENTO,'\0');
            if(strcmp(titulo,"Terreno")==0 || strcmp(titulo,"terreno")==0)
                printImoveis(casa, 50,apartamento,50,terreno,50,TERRENO,'\0');
            system("pause");
        break;
        case 5:
            printf("selecione a disponibilidade(1 - Venda/ 2- Aluguel): ");
            scanf("%d",&disponivel);
            if(disponivel == 1)
                printImoveis(casa, 50,apartamento,50,terreno,50,TODOS,'v');
            if(disponivel == 2)
                printImoveis(casa, 50,apartamento,50,terreno,50,TODOS,'a');

            system("pause");
        break;
    }

    system("cls");

}


void cadastrarEndereco(Endereco endereco){
	fgets(endereco.rua, 31, stdin);
	fgets(endereco.bairro, 31, stdin);
	fgets(endereco.rua, 31, stdin);
	fgets(endereco.cep, 31, stdin);
	fgets(endereco.cidade, 31, stdin);
	fgets(endereco.cep, 9, stdin);
	scanf("%d", &endereco.numero);
}

void subMenuCadastro(Casa casa[],
                  int nCasas,
                  Apartamento apartamento[],
                  int nApartamentos,
                  Terreno terreno[],
                  int nTerrenos){

    int num = 0;
    int primeiroVazio;
    printf("1.CADASTRAR CASA\n2.CADASTRAR APARTAMENTO\n3.CADASTRAR TERRENO\n4.VOLTAR\n");
    scanf("%d%*c",&num);

    switch(num){
    case 1:
        primeiroVazio = procurarVazio(casa, 50, NULL, 50, NULL, 50, 1);
        printf("Digite o titulo: ");
        fgets(casa[primeiroVazio].tituloAnuncio, 51, stdin);
        printf("Digite a disponibilidade(v - vender/a - alugar): ");
        scanf("%c%*c", &casa[primeiroVazio].disponivel);
        printf("Digite o numero de pavimentos e de quartos: ");
        scanf("%d %d",&casa[primeiroVazio].nPavimentos, &casa[primeiroVazio].nQuartos);
        printf("Digite a area do terreno e a da construcao: ");
        scanf("%lf %lf",&casa[primeiroVazio].areaTerreno, &casa[primeiroVazio].areaConstruida);
        printf("Digite o Valor: ");
        scanf("%lf", &casa[primeiroVazio].valor);
        printf("Digite o endereço(Cidade/Bairro/Rua/Numero/CEP): ");
        cadastrarEndereco(casa[primeiroVazio].endereco);
        casa[primeiroVazio].ativo = 1;
        system("pause");

    break;
    case 2:
        primeiroVazio = procurarVazio(NULL, 50, apartamento, 50, NULL, 50, 2);
        printf("Digite o titulo: ");
        fgets(apartamento[primeiroVazio].tituloAnuncio, 51, stdin);
        printf("Digite a disponibilidade(v - vender/a - alugar): ");
        scanf("%c%*c", &apartamento[primeiroVazio].disponivel);
        printf("Digite a posicao(n - norte/s - sul): ");
        scanf("%c%*c", &apartamento[primeiroVazio].posicao);
        printf("Digite o numero de quartos, vagas e andar: ");
        scanf("%d %d", &apartamento[primeiroVazio].nQuartos, &apartamento[primeiroVazio].nVagas, &apartamento[primeiroVazio].andar);
        printf("Digite o valor do condominio, a area\n");
        scanf("%lf %lf",&apartamento[primeiroVazio].valorCondominio, &apartamento[primeiroVazio].area);
        printf("Digite o Valor: ");
        scanf("%lf", &apartamento[primeiroVazio].valor);
        printf("Digite o endereço(Cidade/Bairro/Rua/Numero/CEP): ");
        cadastrarEndereco(apartamento[primeiroVazio].endereco);
        apartamento[primeiroVazio].ativo = 1;
        system("pause");
    break;

    case 3:

    break;

    case 4:
        break;


    }

    system("cls");


}



#endif // MENUIMOBILIARIA_H_INCLUDED
