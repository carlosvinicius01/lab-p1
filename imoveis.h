#ifndef IMOVEIS_H_INCLUDED
#define IMOVEIS_H_INCLUDED

typedef struct endereco{

    char rua[31];
    char bairro[31];
    char cep[11];
    char cidade[31];
    int numero;

} Endereco;

typedef struct casa{

    char tituloAnuncio[51], disponivel;
    int nPavimentos, nQuartos;
    double areaTerreno, areaConstruida;

} Casa;

typedef struct apartamento{

    char tituloAnuncio[51], disponivel, posicao;
    int nQuartos, nVagas, andar;
    double valorCondominio, area;

} Apartamento;

typedef struct terreno{

    char tituloAnuncio[51], disponivel;
    double area;

} Terreno;

//Funcoes que salvam e leem as structs num arquivo

void salvarImoveis(Casa casa[],
              int nCasas,
              Apartamento apartamento[],
              int nApartamentos,
              Terreno terreno[],
              int nTerrenos,
              char *nomeArq)
{
    FILE *fp = fopen(nomeArq, "w");
    fwrite(casa, sizeof(casa[0]), nCasas, fp);
    fwrite(apartamento, sizeof(apartamento[0]), nApartamentos, fp);
    fwrite(terreno, sizeof(terreno[0]), nTerrenos, fp);
    fclose(fp);
}

void lerImoveis(Casa casa[],
              int nCasas,
              Apartamento apartamento[],
              int nApartamentos,
              Terreno terreno[],
              int nTerrenos,
              char *nomeArq)
{
    FILE *fp = fopen(nomeArq, "r");
    fread(casa, sizeof(casa[0]), nCasas, fp);
    fread(apartamento, sizeof(apartamento[0]), nApartamentos, fp);
    fread(terreno, sizeof(terreno[0]), nTerrenos, fp);
    fclose(fp);
}

// sub-funcoes que exibem as informaçoes de uma unica casa, apartamento, ou terreno

void printCasa(Casa *casa){
    printf("Titulo: %s\n"
           "Disponivel para %c\n"
           "%d pavimentos\n"
           "%d quartos\n"
           "Area do terreno: %lf\n"
           "Area construida: %lf\n\n",
           casa->tituloAnuncio,
           casa->disponivel,
           casa->nPavimentos,
           casa->nQuartos,
           casa->areaTerreno,
           casa->areaConstruida);

}

void printApartamento(Apartamento *apartamento){
    printf("Titulo: %s\n"
           "Disponivel para %s\n"
           "Area: %lf\n"
           "%d quartos\n"
           "Posicao: %c\n"
           "%d andar\n"
           "%d vagas de garagem\n"
           "Valor do condominio: %lf\n",
           apartamento->tituloAnuncio,
           apartamento->disponivel,
           apartamento->area,
           apartamento->nQuartos,
           apartamento->posicao,
           apartamento->andar,
           apartamento->nVagas,
           apartamento->valorCondominio);
}

void printTerreno(){

}

/* sub-funcoes que exibem todos os imoveis de um tipo
de acordo com a sua disponibilidade (vender ou alugar) */

void exibirCasas(Casa casa[], int nCasas, char disp)
{
    for(int i = 0; i < nCasas; i++){
        if(casa[i].disponivel == disp){
            printCasa(&casa[i]);
        }
    }
}


#endif // IMOVEIS_H_INCLUDED
