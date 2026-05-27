#include <stdio.h>
int main(){    
//Variaveis para criar as cartas
    int populacao, turisticos;
    float area, pib;
    char carta1[15];
    char carta2[15];
    char estado[8];
    char codigocarta[3];
    char cidade[50];
    float densidade;
    float perCapita;

//Entrada de dados para cadastro da primeira carta
        printf("Qual o nome da primeira carta: \n");
        scanf("%s", &carta1);

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

//Calculo da densidade populacional e PIB per Capita

densidade = (float) populacao / area;
perCapita = (float) (pib / populacao) * 1000000000;

//Retorno dos dados da primeira carta criada
        printf("Carta Criada: %s\n Estado: %s\n Codigo da Carta: %s\n Cidade: %s\n Populacao: %d Milhoes de Pessoas\n Area: %.2f Km2\n PIB: %.2f Bilhoes de Reais\n Numero de Pontos Turisticos: %d\n Densidade Populacional: %.3f hab/km2\n PIB per Capita: %.3f reais\n", carta1, estado, codigocarta, cidade, populacao, area, pib, turisticos, densidade, perCapita);
       
//Entrada de dados para cadastro da Segunda carta
        printf("Qual o nome da segunda carta: \n");
        scanf("%s", &carta2);

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

//Calculo da densidade populacional e PIB per Capita

densidade = (float) populacao / area;
perCapita = (float) (pib / populacao) * 1000000000;

//Retorno dos dados da segunda carta criada
        printf("Carta Criada: %s\n Estado: %s\n Codigo da Carta: %s\n Cidade: %s\n Populacao: %d Milhoes de Pessoas\n Area: %.2f Km2\n PIB: %.2f Bilhoes de Reais\n Numero de Pontos Turisticos: %d\n Densidade Populacional: %.3f hab/km2\n PIB per Capita: %.3f reais\n", carta2, estado, codigocarta, cidade, populacao, area, pib, turisticos, densidade, perCapita);
     return 0;
}