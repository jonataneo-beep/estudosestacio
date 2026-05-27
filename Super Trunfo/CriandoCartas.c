#include <stdio.h>
int main()
{
        // Variaveis para criar as cartas
        int populacao1, turisticos1, populacao2, turisticos2;
        float area1, area2, pib1, pib2;
        char carta1[15];
        char carta2[15];
        char estado1[8];
        char estado2[8];
        char codigocarta1[3];
        char codigocarta2[3];
        char cidade1[50];
        char cidade2[50];
        float densidade1, densidade2;
        float perCapita1, perCapita2;

        // Entrada de dados para cadastro da primeira carta
        printf("Qual o nome da primeira carta: \n");
        scanf("%s", &carta1);

        printf("Estado: \n");
        scanf("%s", &estado1);

        printf("Codigo: \n");
        scanf("%s", &codigocarta1);

        printf("Nome da cidade: \n");
        scanf("%s", &cidade1);

        printf("Populacao: \n");
        scanf("%d", &populacao1);

        printf("Area: \n");
        scanf("%f", &area1);

        printf("PIB: \n");
        scanf("%f", &pib1);

        printf("Turisticos: \n");
        scanf("%d", &turisticos1);

        // Calculo da densidade populacional e PIB per Capita

        densidade1 = (float)populacao1 / area1;
        perCapita1 = (float)(pib1 / populacao1) * 1000000000;

        // Retorno dos dados da primeira carta criada
        printf("Carta Criada: %s\n Estado: %s\n Codigo da Carta: %s\n Cidade: %s\n Populacao: %d Milhoes de Pessoas\n Area: %.2f Km2\n PIB: %.2f Bilhoes de Reais\n Numero de Pontos Turisticos: %d\n Densidade Populacional: %.3f hab/km2\n PIB per Capita: %.3f reais\n", carta1, estado1, codigocarta1, cidade1, populacao1, area1, pib1, turisticos1, densidade1, perCapita1);

        // Entrada de dados para cadastro da Segunda carta
        printf("Qual o nome da segunda carta: \n");
        scanf("%s", &carta2);

        printf("Estado: \n");
        scanf("%s", &estado2);

        printf("Codigo: \n");
        scanf("%s", &codigocarta2);

        printf("Nome da cidade: \n");
        scanf("%s", &cidade2);

        printf("Populacao: \n");
        scanf("%d", &populacao2);

        printf("Area: \n");
        scanf("%f", &area2);

        printf("PIB: \n");
        scanf("%f", &pib2);

        printf("Turisticos: \n");
        scanf("%d", &turisticos2);

        // Calculo da densidade populacional e PIB per Capita

        densidade2 = (float)populacao2 / area2;
        perCapita2 = (float)(pib2 / populacao2) * 1000000000;

        // Retorno dos dados da segunda carta criada
        printf("Carta Criada: %s\n Estado: %s\n Codigo da Carta: %s\n Cidade: %s\n Populacao: %d Milhoes de Pessoas\n Area: %.2f Km2\n PIB: %.2f Bilhoes de Reais\n Numero de Pontos Turisticos: %d\n Densidade Populacional: %.3f hab/km2\n PIB per Capita: %.3f reais\n", carta2, estado2, codigocarta2, cidade2, populacao2, area2, pib2, turisticos2, densidade2, perCapita2);
        
        
        printf("Carta Criada: %s\n Estado: %s\n Codigo da Carta: %s\n Cidade: %s\n Populacao: %d Milhoes de Pessoas\n Area: %.2f Km2\n PIB: %.2f Bilhoes de Reais\n Numero de Pontos Turisticos: %d\n Densidade Populacional: %.3f hab/km2\n PIB per Capita: %.3f reais\n", carta1, estado1, codigocarta1, cidade1, populacao1, area1, pib1, turisticos1, densidade1, perCapita1);
        printf("Carta Criada: %s\n Estado: %s\n Codigo da Carta: %s\n Cidade: %s\n Populacao: %d Milhoes de Pessoas\n Area: %.2f Km2\n PIB: %.2f Bilhoes de Reais\n Numero de Pontos Turisticos: %d\n Densidade Populacional: %.3f hab/km2\n PIB per Capita: %.3f reais\n", carta2, estado2, codigocarta2, cidade2, populacao2, area2, pib2, turisticos2, densidade2, perCapita2);
        
        
        
        return 0;
}