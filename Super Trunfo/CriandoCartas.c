#include <stdio.h>
int main(){    
    //Variaveis para criar as cartas
    int populacao, turisticos;
    float area, pib;
    char estado[8];
    char codigocarta[3];
    char cidade[50];
    //Entrada de dados para cadastro da primeira carta
        printf("Estado: \n");
        scanf("%s", &estado);

        printf("Codigo: \n");
        scanf("%s", &codigocarta);

        printf("Nome da cidade: \n");
        scanf("%s", &cidade);

        printf("Populacao: \n");
        scanf("%d", &populacao);

        printf("Area: \n");
        scanf("%f", &area);

        printf("PIB: \n");
        scanf("%f", &pib);

        printf("Turisticos: \n");
        scanf("%d", &turisticos);
//Retorno dos dados da primeira carta criada
        printf("Carta Criada: 1 %s\n Estado: %s\n Codigo da Carta: %s\n Cidade: %s\n Populacao: %d Milhoes de Pessoas\n Area: %.4f Km2\n PIB: %.4f Bilhoes de Reais\n Numero de Pontos Turisticos: %d\n", estado, estado, codigocarta, cidade, populacao, area, pib, turisticos);
       
 //Entrada de dados para cadastro da Segunda carta
        printf("Estado: \n");
        scanf("%s", &estado);

        printf("Codigo: \n");
        scanf("%s", &codigocarta);

        printf("Nome da cidade: \n");
        scanf("%s", &cidade);

        printf("Populacao: \n");
        scanf("%d", &populacao);

        printf("Area: \n");
        scanf("%f", &area);

        printf("PIB: \n");
        scanf("%f", &pib);

        printf("Turisticos: \n");
        scanf("%d", &turisticos);
//Retorno dos dados da segunda carta criada
        printf("Carta Criada: 2 %s\n Estado: %s\n Codigo da Carta: %s\n Cidade: %s\n Populacao: %d Milhoes de Pessoas\n Area: %.4f Km2\n PIB: %.4f Bilhoes de Reais\n Numero de Pontos Turisticos: %d\n", estado, estado, codigocarta, cidade, populacao, area, pib, turisticos);
return 0;
}