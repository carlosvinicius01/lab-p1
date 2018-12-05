#ifndef IMOVEIS_H_INCLUDED
#define IMOVEIS_H_INCLUDED

typedef enum{
    CASA,APARTAMENTO,TERRENO,TODOS
}TipoImovel;

typedef enum{
    VENDA, ALUGUEL, NENHUM
}Disponibilidade;

typedef struct endereco{

    char rua[31];
    char bairro[31];
    char cep[9];
    char cidade[31];
    int numero;

} Endereco;

typedef struct casa{

    char tituloAnuncio[51], disponivel, ativo;
    int nPavimentos, nQuartos;
    double areaTerreno, areaConstruida, valor;
    Endereco endereco;

} Casa;

typedef struct apartamento{

    char tituloAnuncio[51], disponivel, posicao, ativo;
    int nQuartos, nVagas, andar;
    double valorCondominio, area, valor;
    Endereco endereco;

} Apartamento;

typedef struct terreno{

    char tituloAnuncio[51], disponivel, ativo;
    double area, valor;
    Endereco endereco;

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
           "Area do terreno: %f\n"
           "Area construida: %f\n\n",
           casa->tituloAnuncio,
           casa->disponivel,
           casa->nPavimentos,
           casa->nQuartos,
           casa->areaTerreno,
           casa->areaConstruida);

}

void printApartamento(Apartamento *apartamento){
    printf("Titulo: %s\n"
           "Disponivel para %c\n"
           "Area: %lf\n"
           "%d quartos\n"
           "Posicao: %c\n"
           "%d andar\n"
           "%d vagas de garagem\n"
           "Valor do condominio: %lf\n\n",
           apartamento->tituloAnuncio,
           apartamento->disponivel,
           apartamento->area,
           apartamento->nQuartos,
           apartamento->posicao,
           apartamento->andar,
           apartamento->nVagas,
           apartamento->valorCondominio);
}

void printTerreno(Terreno *terreno){
	printf("Titulo: %s\n"
           "Disponivel para %c\n"
           "Area: %lf\n\n",
	    terreno->tituloAnuncio,
	    terreno->disponivel,
	    terreno->area);

}

/* sub-funcoes que exibem todos os imoveis de um tipo
de acordo com a sua disponibilidade (vender ou alugar) */

void exibirCasas(Casa casa[], int nCasas, char disp)
{
    int i;
    for(i = 0; i < nCasas; i++){
        if(casa[i].ativo != '\0' && (disp == '\0' || disp == casa[i].disponivel)){
            printCasa(&casa[i]);
        }
    }
}

void exibirApartamentos(Apartamento apartamento[], int nApartamentos, char disp)
{
    int i;
    for(i = 0; i < nApartamentos; i++){
        if(apartamento[i].ativo != '\0' && (disp == '\0' || disp == apartamento[i].disponivel)){
            printApartamento(&apartamento[i]);
        }
    }
}

void exibirTerrenos(Terreno terreno[], int nTerrenos, char disp)
{
    int i;
    for(i = 0; i < nTerrenos; i++){
        if(terreno[i].ativo != '\0' && (disp == '\0' || disp == terreno[i].disponivel)){
            printTerreno(&terreno[i]);
        }
    }
}

//Remoção de imoveis

void removerCasa(Casa casa[], int n){
    casa[n].ativo = '\0';
}

void removerApartamento(Apartamento apartamento[], int n){
    apartamento[n].ativo = '\0';
}

void removerTerreno(Terreno terreno[], int n){
    terreno[n].ativo = '\0';
}

///

void printImoveis(Casa casa[],
                  int nCasas,
                  Apartamento apartamento[],
                  int nApartamentos,
                  Terreno terreno[],
                  int nTerrenos,
                  TipoImovel tipo,
                  char disp)
{
    if(tipo == CASA || tipo == TODOS)
        exibirCasas(casa, nCasas, disp);
    if(tipo == APARTAMENTO || tipo == TODOS)
        exibirApartamentos(apartamento, nApartamentos, disp);
    if(tipo == TERRENO || tipo == TODOS)
        exibirTerrenos(terreno, nTerrenos, disp);
}

void imovelPorTitulo(Casa casa[],
                  int nCasas,
                  Apartamento apartamento[],
                  int nApartamentos,
                  Terreno terreno[],
                  int nTerrenos,
                  char *titulo)
{
    int i;
    for(i = 0; i < nCasas; i++){
        if(strcmp(casa[i].tituloAnuncio, titulo)==0 && casa[i].ativo != '\0'){
            printCasa(&casa[i]);
        }
    }
    for(i = 0; i < nApartamentos; i++){
        if(strcmp(apartamento[i].tituloAnuncio, titulo)==0 && apartamento[i].ativo != '\0'){
            printApartamento(&apartamento[i]);
        }
    }
    for(i = 0; i < nTerrenos; i++){
        if(strcmp(terreno[i].tituloAnuncio, titulo)==0 && terreno[i].ativo != '\0'){
            printTerreno(&terreno[i]);
        }
    }
}

void imovelPorBairro(Casa casa[],
                  int nCasas,
                  Apartamento apartamento[],
                  int nApartamentos,
                  Terreno terreno[],
                  int nTerrenos,
                  char *bairro)
{
    int i;
    for(i = 0; i < nCasas; i++){
        if(strcmp(casa[i].endereco.bairro, bairro)==0 && casa[i].ativo != '\0'){
            printCasa(&casa[i]);
        }
    }
    for(i = 0; i < nApartamentos; i++){
        if(strcmp(apartamento[i].endereco.bairro, bairro)==0 && apartamento[i].ativo != '\0'){
            printApartamento(&apartamento[i]);
        }
    }
    for(i = 0; i < nTerrenos; i++){
        if(strcmp(terreno[i].endereco.bairro, bairro)==0 && terreno[i].ativo != '\0'){
            printTerreno(&terreno[i]);
        }
    }
}

void imovelPorValor(Casa casa[],
                  int nCasas,
                  Apartamento apartamento[],
                  int nApartamentos,
                  Terreno terreno[],
                  int nTerrenos,
                  double valor)
{
    int i;
    for(i = 0; i < nCasas; i++){
        if(valor <= casa[i].valor && casa[i].ativo != '\0'){
            printCasa(&casa[i]);
        }
    }
    for(i = 0; i < nApartamentos; i++){
        if(valor <= apartamento[i].valor && apartamento[i].ativo != '\0'){
            printApartamento(&apartamento[i]);
        }
    }
    for(i = 0; i < nTerrenos; i++){
        if(valor <= terreno[i].valor && terreno[i].ativo != '\0'){
            printTerreno(&terreno[i]);
        }
    }
}

int procurarVazio(Casa casa[],
                  int nCasas,
                  Apartamento apartamento[],
                  int nApartamentos,
                  Terreno terreno[],
                  int nTerrenos,
				  int tipo)
{
	if(tipo==1)
		for(int i = 0; i < nCasas; i++){
			if(casa[i].ativo == '\0')
				return i;
		}

	if(tipo==2)
		for(int i = 0; i < nApartamentos; i++){
			if(apartamento[i].ativo == '\0')
				return i;
		}

	if(tipo==3)
		for(int i = 0; i < nTerrenos; i++){
			if(terreno[i].ativo == '\0')
				return i;
		}
}




#endif // IMOVEIS_H_INCLUDED
