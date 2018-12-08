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
            printf("DIGITE O TITULO DO IMOVEL: ");
            fgets(titulo,51,stdin);
            titulo[strlen(titulo)-1] = '\0';
            imovelPorTitulo(casa,50,apartamento,50,terreno,50,titulo);
            system("pause");
        break;
        case 2:
            printf("DIGITE O BAIRRO DESEJADO: ");
            fgets(titulo,51,stdin);
            titulo[strlen(titulo)-1] = '\0';
            imovelPorBairro(casa,50,apartamento,50,terreno,50,titulo);
            system("pause");
        break;
        case 3:
            printf("DIGITE O VALOR: ");
            scanf("%lf",&valor);
            imovelPorValor(casa,50,apartamento,50,terreno,50,valor);
            system("pause");
        break;
        case 4:
            printf("DIGITE O TIPO DO IMOVEL: ");
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
            printf("DISPONIBILIDADE DESEJADA(1 - VENDA/ 2- ALUGUEL): ");
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


void cadastrarEndereco(Endereco *endereco){
    while ((getchar()) != '\n'); // Essa merda que achei na net faz o flush do \n muito doido mermao
    printf("Digite a Cidade: ");
	fgets(endereco->cidade, 31, stdin);
	endereco->cidade[strlen(endereco->cidade)-1] = '\0';

	printf("Digite o Bairro: ");
	fgets(endereco->bairro, 31, stdin);
	endereco->bairro[strlen(endereco->bairro)-1] = '\0';

	printf("Digite a Rua: ");
	fgets(endereco->rua, 31, stdin);
	endereco->rua[strlen(endereco->rua)-1] = '\0';

	printf("Digite o Numero: ");
	scanf("%d%*c", &endereco->numero);

	printf("Digite o CEP: ");
	fgets(endereco->cep, 9, stdin);
	endereco->cep[strlen(endereco->cep)-1] = '\0';

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
    scanf("%d",&num);
    system("cls");

    switch(num){
    case 1:

        while ((getchar()) != '\n');

        primeiroVazio = procurarVazio(casa, 50, NULL, 50, NULL, 50, 1);
        printf("Digite o Titulo: ");
        fgets(casa[primeiroVazio].tituloAnuncio, 51, stdin);
        printf("Digite a Disponibilidade(v - Vender/A - Alugar): ");
        scanf("%c", &casa[primeiroVazio].disponivel);
        printf("Digite o Numero de Pavimentos: ");
        scanf("%d",&casa[primeiroVazio].nPavimentos);
        printf("Digite o Numero de Quartos: ");
        scanf("%d", &casa[primeiroVazio].nQuartos);
        printf("Digite a Area do Terreno: ");
        scanf("%lf", &casa[primeiroVazio].areaTerreno);
        printf("Digite a Area Construida: ");
        scanf("%lf", &casa[primeiroVazio].areaConstruida);
        printf("Digite o Valor: ");
        scanf("%lf", &casa[primeiroVazio].valor);
        //printf("Digite o Endereço(Cidade/Bairro/Rua/Numero/CEP): ");
        cadastrarEndereco(&casa[primeiroVazio].endereco);
        casa[primeiroVazio].ativo = 1;
        printf("\nCasa Cadastrada!\n");
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
        scanf("%d %d %d", &apartamento[primeiroVazio].nQuartos, &apartamento[primeiroVazio].nVagas, &apartamento[primeiroVazio].andar);
        printf("Digite o valor do condominio, a area\n");
        scanf("%lf %lf",&apartamento[primeiroVazio].valorCondominio, &apartamento[primeiroVazio].area);
        printf("Digite o Valor: ");
        scanf("%lf", &apartamento[primeiroVazio].valor);
        printf("Digite o endereço(Cidade/Bairro/Rua/Numero/CEP): ");
        cadastrarEndereco(&apartamento[primeiroVazio].endereco);
        apartamento[primeiroVazio].ativo = 1;
        system("pause");
    break;

    case 3:
        primeiroVazio = procurarVazio(NULL, 50, NULL, 50, terreno, 50, 3);
        printf("Digite o titulo: ");
        fgets(terreno[primeiroVazio].tituloAnuncio, 51, stdin);
        printf("Digite a disponibilidade(v - vender/a - alugar): ");
        scanf("%c%*c", &terreno[primeiroVazio].disponivel);
        printf("Digite a Area: ");
        scanf("%lf",&terreno[primeiroVazio].area);
        printf("Digite o Valor: ");
        scanf("%lf", &terreno[primeiroVazio].valor);
        printf("Digite o endereço(Cidade/Bairro/Rua/Numero/CEP): ");
        cadastrarEndereco(&terreno[primeiroVazio].endereco);
        terreno[primeiroVazio].ativo = 1;
        system("pause");

    break;

    case 4:
        break;


    }

    system("cls");


}

void subMenuEditar(Casa casa[],
                  int nCasas,
                  Apartamento apartamento[],
                  int nApartamentos,
                  Terreno terreno[],
                  int nTerrenos)
                  {
                     int num, edit, i, num2;
                     char titulo[51];

                     printf("1.EDITAR CASA\n2.EDITAR APARTAMENTO\n3.EDITAR TERRENO\n4.VOLTAR\n");
                     scanf("%d%*c",&num);
                     switch(num){
                    case 1:
                        printf("digite o titulo do imovel que deseja editar: ");
                        fgets(titulo,51,stdin);
                        //titulo[strlen(titulo)-1] = '\0';    DA ERRADO SE BOTAR ESSA MERDA PQ NAO BOTAMOS NA CRIACAO;
                        for(i = 0; i < nCasas; i++){
                            if(strcmp(casa[i].tituloAnuncio, titulo)==0 && casa[i].ativo != '\0'){
                                edit = 1; // recebe 1 se o titulo for encontrado
                                break;
                                }
                            }
                            if(edit == 1){
                                printf("1.EDITAR TITULO\n2.MUDAR DISPONIBILIDADE\n3.EDITAR QUARTOS E PAVs\n4.EDITAR AREAS\n5.EDITAR VALOR\n6.EDITAR ENDEREÇO\n7.SAIR");
                                scanf("%d%*c",&num2);
                                switch(num2){
                                    case 1:
                                        printf("Digite o novo titulo: ");
                                        fgets(casa[i].tituloAnuncio, 51, stdin);
                                    break;
                                    case 2:
                                        printf("Digite a disponibilidade: ");
                                        scanf("%c%*c", &casa[i].disponivel);
                                        break;
                                    case 3:
                                        printf("digite o numero de quartos e pavimentos: ");
                                        scanf("%d %d",&casa[i].nQuartos, &casa[i].nPavimentos);
                                        break;
                                    case 4:
                                        printf("digite a area do terreno e a construida: ");
                                        scanf("%lf %lf",&casa[i].areaTerreno, &casa[i].areaConstruida);
                                        break;
                                    case 5:
                                        printf("digite o novo valor: ");
                                        scanf("%lf", &casa[i].valor);
                                        break;
                                    case 6:
                                        printf("digite o endereço(cidade,bairro,rua,numero,cep): ");
                                        cadastrarEndereco(&casa[i].endereco);
                                        break;
                                }
                                break;
                            }
                            else{
                                printf("Imovel nao encontrado, aperte enter para voltar ao menu\n");
                            }
                        break;

                    case 2:
                        printf("digite o titulo do imovel que deseja editar: ");
                        fgets(titulo,51,stdin);
                        //titulo[strlen(titulo)-1] = '\0';    DA ERRADO SE BOTAR ESSA MERDA PQ NAO BOTAMOS NA CRIACAO;
                        for(i = 0; i < nApartamentos; i++){
                            if(strcmp(apartamento[i].tituloAnuncio, titulo)==0 && apartamento[i].ativo != '\0'){
                                edit = 1; // recebe 1 se o titulo for encontrado
                                break;
                                }
                            }
                            if(edit == 1){
                                printf("1.EDITAR TITULO\n2.MUDAR DISPONIBILIDADE\n3.EDITAR QUARTOS/VAGAS/ANDAR\n4.EDITAR POSICAO/AREA\n5.EDITAR VALORES\n6.EDITAR ENDEREÇO\n7.SAIR");
                                scanf("%d%*c",&num2);
                                switch(num2){
                                    case 1:
                                        printf("Digite o novo titulo: ");
                                         fgets(apartamento[i].tituloAnuncio, 51, stdin);
                                    break;
                                    case 2:
                                        printf("Digite a disponibilidade: ");
                                        scanf("%c%*c", &apartamento[i].disponivel);
                                        break;
                                    case 3:
                                       printf("Digite o numero de quartos, vagas e andar: ");
                                       scanf("%d %d %d", &apartamento[i].nQuartos, &apartamento[i].nVagas, &apartamento[i].andar);
                                        break;
                                    case 4:
                                        printf("Digite a posicao(n - norte/s - sul) e a area do apto: ");
                                        scanf("%c%*c %lf", &apartamento[i].posicao, &apartamento[i].area);
                                        break;
                                    case 5:
                                        printf("digite o novo valor do imovel e do condominio: ");
                                        scanf("%lf %lf", &apartamento[i].valor, &apartamento[i].valorCondominio);
                                        break;
                                    case 6:
                                        printf("digite o endereço(cidade,bairro,rua,numero,cep): ");
                                        cadastrarEndereco(&apartamento[i].endereco);
                                        break;
                                    case 7:
                                        break;
                                }
                                break;
                            }
                            else{
                                printf("Imovel nao encontrado, aperte enter para voltar ao menu\n");
                            }
                        break;
                    case 3:
                        printf("digite o titulo do imovel que deseja editar: ");
                        fgets(titulo,51,stdin);
                        //titulo[strlen(titulo)-1] = '\0';    DA ERRADO SE BOTAR ESSA MERDA PQ NAO BOTAMOS NA CRIACAO;
                        for(i = 0; i < nTerrenos; i++){
                            if(strcmp(terreno[i].tituloAnuncio, titulo)==0 && terreno[i].ativo != '\0'){
                                edit = 1; // recebe 1 se o titulo for encontrado
                                break;
                                }
                            }
                        if(edit == 1){
                                printf("1.EDITAR TITULO\n2.MUDAR DISPONIBILIDADE\n3.EDITAR AREA\n4.EDITAR VALOR\n5.EDITAR ENDERECO\n6.SAIR");
                                scanf("%d%*c",&num2);
                                switch(num2){
                                    case 1:
                                        printf("Digite o novo titulo: ");
                                        fgets(terreno[i].tituloAnuncio, 51, stdin);
                                    break;
                                    case 2:
                                        printf("Digite a disponibilidade: ");
                                        scanf("%c%*c", &terreno[i].disponivel);
                                        break;
                                    case 3:
                                       printf("Digite a Area: ");
                                       scanf("%lf",&terreno[i].area);
                                        break;
                                    case 4:
                                       printf("Digite o Valor: ");
                                       scanf("%lf", &terreno[i].valor);
                                        break;
                                    case 5:
                                        printf("digite o endereço(cidade,bairro,rua,numero,cep): ");
                                        cadastrarEndereco(&terreno[i].endereco);
                                        break;
                                    case 6:
                                        break;
                                }
                                break;
                            }
                            else{
                                printf("Imovel nao encontrado, aperte enter para voltar ao menu\n");
                            }
                        break;

                    case 4:
                        break;
                     }
                  }

void subMenuExcluir(Casa casa[],
                  int nCasas,
                  Apartamento apartamento[],
                  int nApartamentos,
                  Terreno terreno[],
                  int nTerrenos)
    {
                     int num, edit, i, num2;
                     char titulo[51];

                     printf("1.REMOVER CASA\n2.REMOVER APARTAMENTO\n3.REMOVER TERRENO\n4.VOLTAR\n");
                     scanf("%d%*c",&num);

                     switch(num){
                    case 1:
                         printf("digite o titulo do imovel que deseja editar: ");
                         fgets(titulo,51,stdin);
                        //titulo[strlen(titulo)-1] = '\0';    DA ERRADO SE BOTAR ESSA MERDA PQ NAO BOTAMOS NA CRIACAO;
                         for(i = 0; i < nCasas; i++){
                            if(strcmp(casa[i].tituloAnuncio, titulo)==0 && casa[i].ativo != '\0'){
                                edit = 1; // recebe 1 se o titulo for encontrado
                                break;
                                }
                            }
                          if(edit == 1)
                            casa[i].ativo = '\0';
                          else
                            printf("Imovel nao encontrado\n");
                        break;

                    case 2:
                         printf("digite o titulo do imovel que deseja editar: ");
                         fgets(titulo,51,stdin);
                        //titulo[strlen(titulo)-1] = '\0';    DA ERRADO SE BOTAR ESSA MERDA PQ NAO BOTAMOS NA CRIACAO;
                         for(i = 0; i < nApartamentos; i++){
                            if(strcmp(apartamento[i].tituloAnuncio, titulo)==0 && apartamento[i].ativo != '\0'){
                                edit = 1; // recebe 1 se o titulo for encontrado
                                break;
                                }
                            }
                          if(edit == 1)
                            apartamento[i].ativo = '\0';
                          else
                            printf("Imovel nao encontrado\n");
                        break;

                    case 3:
                         printf("digite o titulo do imovel que deseja editar: ");
                         fgets(titulo,51,stdin);
                        //titulo[strlen(titulo)-1] = '\0';    DA ERRADO SE BOTAR ESSA MERDA PQ NAO BOTAMOS NA CRIACAO;
                         for(i = 0; i < nTerrenos; i++){
                            if(strcmp(terreno[i].tituloAnuncio, titulo)==0 && terreno[i].ativo != '\0'){
                                edit = 1; // recebe 1 se o titulo for encontrado
                                break;
                                }
                            }
                          if(edit == 1)
                            terreno[i].ativo = '\0';
                          else
                            printf("Imovel nao encontrado\n");
                        break;

                    case 4:
                        break;
                     }












}

#endif // MENUIMOBILIARIA_H_INCLUDED
