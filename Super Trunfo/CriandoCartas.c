#include <stdio.h>
int main()
{
// Variaveis para criar as cartas
        int turisticos1, turisticos2;
        unsigned long int populacao1, populacao2;
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
        long double superpoder1, superpoder2;
        int rpopulacao, ipopulacao, rturisticos, ituristicos, rarea, iarea, rpib, ipib, rdensidade, idensidade, rperCapita, iperCapita, rsuperpoder, isuperpoder;


// Entrada de dados para cadastro da primeira carta
        printf("Qual o nome da primeira carta: \n");
        scanf("%s", carta1);

        printf("Estado: \n");
        scanf("%s", estado1);

        printf("Codigo: \n");
        scanf("%s", codigocarta1);

        printf("Nome da cidade: \n");
        scanf("%s", cidade1);

        printf("Populacao: \n");
        scanf("%lu", &populacao1);

        printf("Area: \n");
        scanf("%f", &area1);

        printf("PIB: \n");
        scanf("%f", &pib1);

        printf("Turisticos: \n");
        scanf("%d", &turisticos1);

// Calculo da densidade populacional e PIB per Capita

        densidade1 = (float)populacao1 / area1;
        perCapita1 = (float)(pib1 / populacao1) * 1000000000;
        superpoder1 = (long double)populacao1 + area1 + pib1 + turisticos1 + perCapita1 + (1 / densidade1);

// Retorno dos dados da primeira carta criada
        printf("Carta Criada: %s\n Estado: %s\n Codigo da Carta: %s\n Cidade: %s\n Populacao: %lu Milhoes de Pessoas\n Area: %.2f Km2\n PIB: %.2f Bilhoes de Reais\n Numero de Pontos Turisticos: %d\n Densidade Populacional: %.3f hab/km2\n PIB per Capita: %.3f reais\n", carta1, estado1, codigocarta1, cidade1, populacao1, area1, pib1, turisticos1, densidade1, perCapita1);
        printf("Super Poder da Carta: %.7Lf\n", superpoder1);
// Entrada de dados para cadastro da Segunda carta
        printf("Qual o nome da segunda carta: \n");
        scanf("%s", carta2);

        printf("Estado: \n");
        scanf("%s", estado2);

        printf("Codigo: \n");
        scanf("%s", codigocarta2);

        printf("Nome da cidade: \n");
        scanf("%s", cidade2);

        printf("Populacao: \n");
        scanf("%lu", &populacao2);

        printf("Area: \n");
        scanf("%f", &area2);

        printf("PIB: \n");
        scanf("%f", &pib2);

        printf("Turisticos: \n");
        scanf("%d", &turisticos2);

// Calculo da densidade populacional e PIB per Capita

        densidade2 = (float)populacao2 / area2;
        perCapita2 = (float)(pib2 / populacao2) * 1000000000;
        superpoder2 = (long double)populacao2 + area2 + pib2 + turisticos2 + perCapita2 + (1 / densidade2);

// Retorno dos dados da segunda carta criada
        printf("Carta Criada: %s\n Estado: %s\n Codigo da Carta: %s\n Cidade: %s\n Populacao: %lu Milhoes de Pessoas\n Area: %.2f Km2\n PIB: %.2f Bilhoes de Reais\n Numero de Pontos Turisticos: %d\n Densidade Populacional: %.3f hab/km2\n PIB per Capita: %.3f reais\n", carta2, estado2, codigocarta2, cidade2, populacao2, area2, pib2, turisticos2, densidade2, perCapita2);
        printf("Super Poder da Carta: %.7Lf\n", superpoder2);
        
        
        printf("Carta Criada: %s\n Estado: %s\n Codigo da Carta: %s\n Cidade: %s\n Populacao: %lu Milhoes de Pessoas\n Area: %.2f Km2\n PIB: %.2f Bilhoes de Reais\n Numero de Pontos Turisticos: %d\n Densidade Populacional: %.3f hab/km2\n PIB per Capita: %.3f reais\n", carta1, estado1, codigocarta1, cidade1, populacao1, area1, pib1, turisticos1, densidade1, perCapita1);
        printf("Super Poder da Carta: %.7Lf\n", superpoder1);
        printf("Carta Criada: %s\n Estado: %s\n Codigo da Carta: %s\n Cidade: %s\n Populacao: %lu Milhoes de Pessoas\n Area: %.2f Km2\n PIB: %.2f Bilhoes de Reais\n Numero de Pontos Turisticos: %d\n Densidade Populacional: %.3f hab/km2\n PIB per Capita: %.3f reais\n", carta2, estado2, codigocarta2, cidade2, populacao2, area2, pib2, turisticos2, densidade2, perCapita2);
        printf("Super Poder da Carta: %.7Lf\n", superpoder2);
// Comparação dos super poderes das cartas
        rpopulacao = populacao1 > populacao2;
        ipopulacao = populacao1 == populacao2;
        rarea = area1 > area2;
        iarea = area1 == area2;
        rpib = pib1 > pib2;
        ipib = pib1 == pib2;
        rturisticos = turisticos1 > turisticos2;
        ituristicos = turisticos1 == turisticos2;
        rdensidade = densidade1 > densidade2;
        idensidade = densidade1 == densidade2;
        rperCapita = perCapita1 > perCapita2;
        iperCapita = perCapita1 == perCapita2;
        rsuperpoder = superpoder1 > superpoder2;
        isuperpoder = superpoder1 == superpoder2;

        printf("Comparacao entre as cartas:\n");
        printf("Populacao: %d\n", rpopulacao);
        printf("Area: %d\n", rarea);
        printf("PIB: %d\n", rpib);
        printf("Turisticos: %d\n", rturisticos);
        printf("Densidade Populacional: %d\n", rdensidade);
        printf("PIB per Capita: %d\n", rperCapita);
        printf("Super Poder: %d\n", rsuperpoder);

// Menu interativo para comparação de atributos
        int escolha;
        printf("Escolha um atributo para comparar:\n");
        printf("1. Populacao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Turisticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("7. Super Poder\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Comparacao de Populacao:\n");
                break;
            case 2:
                printf("Comparacao de Area:\n");
                break;
            case 3:
                printf("Comparacao de PIB:\n");
                break;
            case 4:
                printf("Comparacao de Turisticos:\n");
                break;
            case 5:
                printf("Comparacao de Densidade Populacional:\n");
                break;
            case 6:
                printf("Comparacao de PIB per Capita:\n");
                break;
            case 7:
                printf("Comparacao de Super Poder:\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
        if (escolha == 1 && rpopulacao == 1) {
            printf("O Atributo escolhido para comparacao foi Populacao.\n");
                printf("A cidade %s tem uma populacao de %ld e a Cidade %s tem uma populacao de %ld.\n", cidade1, populacao1, cidade2, populacao2);
                       printf("A CARTA %s Ganhou a comparacao de populacao.\n", carta1);
        } else if (escolha == 1 && rpopulacao == 0 && ipopulacao == 0) {
           printf("O Atributo escolhido para comparacao foi Populacao.\n");
                printf("A cidade %s tem uma populacao de %ld e a Cidade %s tem uma populacao de %ld.\n", cidade1, populacao1, cidade2, populacao2);
                       printf("A CARTA %s Ganhou a comparacao de populacao.\n", carta2);
        } else if (escolha == 1 && ipopulacao == 1) {
            printf("O Atributo escolhido para comparacao foi Populacao.\n");
                printf("A cidade %s tem uma populacao de %ld e a Cidade %s tem uma populacao de %ld.\n", cidade1, populacao1, cidade2, populacao2);
                       printf("As CARTAS %s e %s Empataram a comparacao de populacao.\n", carta1, carta2);
        }
        if (escolha == 2 && rarea == 1) {
            printf("O Atributo escolhido para comparacao foi Area.\n");
                printf("A cidade %s tem uma area de %.2f e a Cidade %s tem uma area de %.2f.\n", cidade1, area1, cidade2, area2);
                       printf("A CARTA %s Ganhou a comparacao de area.\n", carta1);
        } else if (escolha == 2 && rarea == 0 && iarea == 0) {
           printf("O Atributo escolhido para comparacao foi Area.\n");
                printf("A cidade %s tem uma area de %.2f e a Cidade %s tem uma area de %.2f.\n", cidade1, area1, cidade2, area2);
                       printf("A CARTA %s Ganhou a comparacao de area.\n", carta2);
        } else if (escolha == 2 && iarea == 1) {
            printf("O Atributo escolhido para comparacao foi Area.\n");
                printf("A cidade %s tem uma area de %.2f e a Cidade %s tem uma area de %.2f.\n", cidade1, area1, cidade2, area2);
                       printf("As CARTAS %s e %s Empataram a comparacao de area.\n", carta1, carta2);
        }
        if (escolha == 3 && rpib == 1) {
            printf("O Atributo escolhido para comparacao foi PIB.\n");
                printf("A cidade %s tem um PIB de %.2f e a Cidade %s tem um PIB de %.2f.\n", cidade1, pib1, cidade2, pib2);
                       printf("A CARTA %s Ganhou a comparacao de PIB.\n", carta1);
        } else if (escolha == 3 && rpib == 0 && ipib == 0) {
           printf("O Atributo escolhido para comparacao foi PIB.\n");
                printf("A cidade %s tem um PIB de %.2f e a Cidade %s tem um PIB de %.2f.\n", cidade1, pib1, cidade2, pib2);
                       printf("A CARTA %s Ganhou a comparacao de PIB.\n", carta2);
        } else if (escolha == 3 && ipib == 1) {
            printf("O Atributo escolhido para comparacao foi PIB.\n");
                printf("A cidade %s tem um PIB de %.2f e a Cidade %s tem um PIB de %.2f.\n", cidade1, pib1, cidade2, pib2);
                       printf("As CARTAS %s e %s Empataram a comparacao de PIB.\n", carta1, carta2);
        }
        if (escolha == 4 && rturisticos == 1) {
            printf("O Atributo escolhido para comparacao foi Turisticos.\n");
                printf("A cidade %s tem %d pontos turisticos e a Cidade %s tem %d pontos turisticos.\n", cidade1, turisticos1, cidade2, turisticos2);
                       printf("A CARTA %s Ganhou a comparacao de Turisticos.\n", carta1);
        } else if (escolha == 4 && rturisticos == 0 && ituristicos == 0) {
           printf("O Atributo escolhido para comparacao foi Turisticos.\n");
                printf("A cidade %s tem %d pontos turisticos e a Cidade %s tem %d pontos turisticos.\n", cidade1, turisticos1, cidade2, turisticos2);
                       printf("A CARTA %s Ganhou a comparacao de Turisticos.\n", carta2);
        } else if (escolha == 4 && ituristicos == 1) {
                printf("O Atributo escolhido para comparacao foi Turisticos.\n");
                printf("A cidade %s tem %d pontos turisticos e a Cidade %s tem %d pontos turisticos.\n", cidade1, turisticos1, cidade2, turisticos2);
                       printf("As CARTAS %s e %s Empataram a comparacao de Turisticos.\n", carta1, carta2);
        }
        if (escolha == 5 && rdensidade == 1) {
            printf("O Atributo escolhido para comparacao foi Densidade Populacional.\n");
                printf("A cidade %s tem uma densidade populacional de %.3f e a Cidade %s tem uma densidade populacional de %.3f.\n", cidade1, densidade1, cidade2, densidade2);
                       printf("A CARTA %s Ganhou a comparacao de Densidade Populacional.\n", carta1);
        } else if (escolha == 5 && rdensidade == 0 && idensidade == 0) {
           printf("O Atributo escolhido para comparacao foi Densidade Populacional.\n");
                printf("A cidade %s tem uma densidade populacional de %.3f e a Cidade %s tem uma densidade populacional de %.3f.\n", cidade1, densidade1, cidade2, densidade2);
                       printf("A CARTA %s Ganhou a comparacao de Densidade Populacional.\n", carta2);
        } else if (escolha == 5 && idensidade == 1) {
            printf("O Atributo escolhido para comparacao foi Densidade Populacional.\n");
                printf("A cidade %s tem uma densidade populacional de %.3f e a Cidade %s tem uma densidade populacional de %.3f.\n", cidade1, densidade1, cidade2, densidade2);
                       printf("As CARTAS %s e %s Empataram a comparacao de Densidade Populacional.\n", carta1, carta2);
        }
        if (escolha == 6 && rperCapita == 1) {
            printf("O Atributo escolhido para comparacao foi PIB per Capita.\n");
                printf("A cidade %s tem um PIB per Capita de %.3f e a Cidade %s tem um PIB per Capita de %.3f.\n", cidade1, perCapita1, cidade2, perCapita2);
                       printf("A CARTA %s Ganhou a comparacao de PIB per Capita.\n", carta1);
        } else if (escolha == 6 && rperCapita == 0 && iperCapita == 0) {
           printf("O Atributo escolhido para comparacao foi PIB per Capita.\n");
                printf("A cidade %s tem um PIB per Capita de %.3f e a Cidade %s tem um PIB per Capita de %.3f.\n", cidade1, perCapita1, cidade2, perCapita2);
                       printf("A CARTA %s Ganhou a comparacao de PIB per Capita.\n", carta2);
        } else if (escolha == 6 && iperCapita == 1) {
            printf("O Atributo escolhido para comparacao foi PIB per Capita.\n");
                printf("A cidade %s tem um PIB per Capita de %.3f e a Cidade %s tem um PIB per Capita de %.3f.\n", cidade1, perCapita1, cidade2, perCapita2);
                       printf("As CARTAS %s e %s Empataram a comparacao de PIB per Capita.\n", carta1, carta2);
        }
        if (escolha == 7 && rsuperpoder == 1) {
            printf("O Atributo escolhido para comparacao foi Super Poder.\n");
                printf("A cidade %s tem um Super Poder de %.7Lf e a Cidade %s tem um Super Poder de %.7Lf.\n", cidade1, superpoder1, cidade2, superpoder2);
                       printf("A CARTA %s Ganhou a comparacao de Super Poder.\n", carta1);
        } else if (escolha == 7 && rsuperpoder == 0 && isuperpoder == 0) {
           printf("O Atributo escolhido para comparacao foi Super Poder.\n");
                printf("A cidade %s tem um Super Poder de %.7Lf e a Cidade %s tem um Super Poder de %.7Lf.\n", cidade1, superpoder1, cidade2, superpoder2);
                       printf("A CARTA %s Ganhou a comparacao de Super Poder.\n", carta2);
        } else if (escolha == 7 && isuperpoder == 1) {
            printf("O Atributo escolhido para comparacao foi Super Poder.\n");
                printf("A cidade %s tem um Super Poder de %.7Lf e a Cidade %s tem um Super Poder de %.7Lf.\n", cidade1, superpoder1, cidade2, superpoder2);
                       printf("As CARTAS %s e %s Empataram a comparacao de Super Poder.\n", carta1, carta2);
        }
        return 0;
}