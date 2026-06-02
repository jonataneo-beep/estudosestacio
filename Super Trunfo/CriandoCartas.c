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
        int escolha1, escolha2;
        printf("Escolha dois atributos para comparar:\n");
        printf("1. Populacao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Turisticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("7. Super Poder\n");
        printf("Escolha o primeiro atributo: ");
        scanf("%d", &escolha1);
        printf("Escolha o segundo atributo: ");
        scanf("%d", &escolha2);

        if (escolha1 == 1 && escolha2 == 2) {
                printf("Comparacao entre Populacao e Area:\n");
                printf("Populacao da Cidade %s é %lu e a Populacao da Cidade %s é %lu\n", cidade1, populacao1, cidade2, populacao2);
                printf("A Area da Cidade %s é %.2f e a Area da Cidade %s é %.2f\n", cidade1, area1, cidade2, area2);
                populacao1 + area1 > populacao2 + area2 ? printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta1, carta2, carta1) : printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta2, carta1, carta2);
                populacao1 + area1 == populacao2 + area2 ? printf("As cartas %s e %s tem a mesma pontuacao, entao temos um empate!\n", carta1, carta2) : printf("");
        } else if (escolha1 == 1 && escolha2 == 3) {
                printf("Comparacao entre Populacao e PIB:\n");
                printf("Populacao da Cidade %s é %lu e a Populacao da Cidade %s é %lu\n", cidade1, populacao1, cidade2, populacao2);
                printf("O PIB da Cidade %s é %.2f e o PIB da Cidade %s é %.2f\n", cidade1, pib1, cidade2, pib2);
                populacao1 + pib1 > populacao2 + pib2 ? printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta1, carta2, carta1) : printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta2, carta1, carta2);
                populacao1 + pib1 == populacao2 + pib2 ? printf("As cartas %s e %s tem a mesma pontuacao, entao temos um empate!\n", carta1, carta2) : printf("");
        } else if (escolha1 == 1 && escolha2 == 4) {
                printf("Comparacao entre Populacao e Turisticos:\n");
                printf("Populacao da Cidade %s é %lu e a Populacao da Cidade %s é %lu\n", cidade1, populacao1, cidade2, populacao2);
                printf("Os pontos Turisticos da Cidade %s são %d e os pontos Turisticos da Cidade %s são %d\n", cidade1, turisticos1, cidade2, turisticos2);
                populacao1 + turisticos1 > populacao2 + turisticos2 ? printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta1, carta2, carta1) : printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta2, carta1, carta2);
                populacao1 + turisticos1 == populacao2 + turisticos2 ? printf("As cartas %s e %s tem a mesma pontuacao, entao temos um empate!\n", carta1, carta2) : printf("");
        } else if (escolha1 == 1 && escolha2 == 5) {
                printf("Comparacao entre Populacao e Densidade Populacional:\n");
                printf("Populacao da Cidade %s é %lu e a Populacao da Cidade %s é %lu\n", cidade1, populacao1, cidade2, populacao2);
                printf("A Densidade Populacional da Cidade %s é %.2f e a Densidade Populacional da Cidade %s é %.2f\n", cidade1, densidade1, cidade2, densidade2);
                populacao1 + densidade1 > populacao2 + densidade2 ? printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta1, carta2, carta1) : printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta2, carta1, carta2);
                populacao1 + densidade1 == populacao2 + densidade2 ? printf("As cartas %s e %s tem a mesma pontuacao, entao temos um empate!\n", carta1, carta2) : printf("");
        } else if (escolha1 == 1 && escolha2 == 6) {
                printf("Comparacao entre Populacao e PIB per Capita:\n");
                printf("Populacao da Cidade %s é %lu e a Populacao da Cidade %s é %lu\n", cidade1, populacao1, cidade2, populacao2);
                printf("O PIB per Capita da Cidade %s é %.2f e o PIB per Capita da Cidade %s é %.2f\n", cidade1, perCapita1, cidade2, perCapita2);
                populacao1 + perCapita1 > populacao2 + perCapita2 ? printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta1, carta2, carta1) : printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta2, carta1, carta2);
                populacao1 + perCapita1 == populacao2 + perCapita2 ? printf("As cartas %s e %s tem a mesma pontuacao, entao temos um empate!\n", carta1, carta2) : printf("");
        } else if (escolha1 == 1 && escolha2 == 7) {
                printf("Comparacao entre Populacao e Super Poder:\n");
                printf("Populacao da Cidade %s é %lu e a Populacao da Cidade %s é %lu\n", cidade1, populacao1, cidade2, populacao2);
                printf("O Super Poder da Cidade %s é %.2f e o Super Poder da Cidade %s é %.2f\n", cidade1, superpoder1, cidade2, superpoder2);
                populacao1 + superpoder1 > populacao2 + superpoder2 ? printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta1, carta2, carta1) : printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta2, carta1, carta2);
                populacao1 + superpoder1 == populacao2 + superpoder2 ? printf("As cartas %s e %s tem a mesma pontuacao, entao temos um empate!\n", carta1, carta2) : printf("");
        } else if (escolha1 == 2 && escolha2 == 3) {
                printf("Comparacao entre Area e PIB:\n");
                printf("A Area da Cidade %s é %.2f e a Area da Cidade %s é %.2f\n", cidade1, area1, cidade2, area2);
                printf("O PIB da Cidade %s é %.2f e o PIB da Cidade %s é %.2f\n", cidade1, pib1, cidade2, pib2);
                area1 + pib1 > area2 + pib2 ? printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta1, carta2, carta1) : printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta2, carta1, carta2);
                area1 + pib1 == area2 + pib2 ? printf("As cartas %s e %s tem a mesma pontuacao, entao temos um empate!\n", carta1, carta2) : printf("");
        } else if (escolha1 == 2 && escolha2 == 4) {
                printf("Comparacao entre Area e Turisticos:\n");
                printf("A Area da Cidade %s é %.2f e a Area da Cidade %s é %.2f\n", cidade1, area1, cidade2, area2);
                printf("Os pontos Turisticos da Cidade %s são %d e os pontos Turisticos da Cidade %s são %d\n", cidade1, turisticos1, cidade2, turisticos2);
                area1 + turisticos1 > area2 + turisticos2 ? printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta1, carta2, carta1) : printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta2, carta1, carta2);
                area1 + turisticos1 == area2 + turisticos2 ? printf("As cartas %s e %s tem a mesma pontuacao, entao temos um empate!\n", carta1, carta2) : printf("");
        } else if (escolha1 == 2 && escolha2 == 5) {
                printf("Comparacao entre Area e Densidade Populacional:\n");
                printf("A Area da Cidade %s é %.2f e a Area da Cidade %s é %.2f\n", cidade1, area1, cidade2, area2);
                printf("A Densidade Populacional da Cidade %s é %.2f e a Densidade Populacional da Cidade %s é %.2f\n", cidade1, densidade1, cidade2, densidade2);
                area1 + densidade1 > area2 + densidade2 ? printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta1, carta2, carta1) : printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta2, carta1, carta2);
                area1 + densidade1 == area2 + densidade2 ? printf("As cartas %s e %s tem a mesma pontuacao, entao temos um empate!\n", carta1, carta2) : printf("");
        } else if (escolha1 == 2 && escolha2 == 6) {
                printf("Comparacao entre Area e PIB per Capita:\n");
                printf("A Area da Cidade %s é %.2f e a Area da Cidade %s é %.2f\n", cidade1, area1, cidade2, area2);
                printf("O PIB per Capita da Cidade %s é %.2f e o PIB per Capita da Cidade %s é %.2f\n", cidade1, perCapita1, cidade2, perCapita2);
                area1 + perCapita1 > area2 + perCapita2 ? printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta1, carta2, carta1) : printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta2, carta1, carta2);
                area1 + perCapita1 == area2 + perCapita2 ? printf("As cartas %s e %s tem a mesma pontuacao, entao temos um empate!\n", carta1, carta2) : printf("");
        } else if (escolha1 == 2 && escolha2 == 7) {
                printf("Comparacao entre Area e Super Poder:\n");
                printf("A Area da Cidade %s é %.2f e a Area da Cidade %s é %.2f\n", cidade1, area1, cidade2, area2);
                printf("O Super Poder da Cidade %s é %.2f e o Super Poder da Cidade %s é %.2f\n", cidade1, superpoder1, cidade2, superpoder2);
                area1 + superpoder1 > area2 + superpoder2 ? printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta1, carta2, carta1) : printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta2, carta1, carta2);
                area1 + superpoder1 == area2 + superpoder2 ? printf("As cartas %s e %s tem a mesma pontuacao, entao temos um empate!\n", carta1, carta2) : printf("");
        } else if (escolha1 == 3 && escolha2 == 4) {
                printf("Comparacao entre PIB e Turisticos:\n");
                printf("O PIB da Cidade %s é %.2f e o PIB da Cidade %s é %.2f\n", cidade1, pib1, cidade2, pib2);
                printf("Os pontos Turisticos da Cidade %s são %d e os pontos Turisticos da Cidade %s são %d\n", cidade1, turisticos1, cidade2, turisticos2);
                pib1 + turisticos1 > pib2 + turisticos2 ? printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta1, carta2, carta1) : printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta2, carta1, carta2);
                pib1 + turisticos1 == pib2 + turisticos2 ? printf("As cartas %s e %s tem a mesma pontuacao, entao temos um empate!\n", carta1, carta2) : printf("");
        } else if (escolha1 == 3 && escolha2 == 6) {
                printf("Comparacao entre PIB e PIB per Capita:\n");
                printf("O PIB da Cidade %s é %.2f e o PIB da Cidade %s é %.2f\n", cidade1, pib1, cidade2, pib2);
                printf("O PIB per Capita da Cidade %s é %.2f e o PIB per Capita da Cidade %s é %.2f\n", cidade1, perCapita1, cidade2, perCapita2);
                pib1 + perCapita1 > pib2 + perCapita2 ? printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta1, carta2, carta1) : printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta2, carta1, carta2);
                pib1 + perCapita1 == pib2 + perCapita2 ? printf("As cartas %s e %s tem a mesma pontuacao, entao temos um empate!\n", carta1, carta2) : printf("");
        } else if (escolha1 == 3 && escolha2 == 7) {
                printf("Comparacao entre PIB e Super Poder:\n");
                printf("O PIB da Cidade %s é %.2f e o PIB da Cidade %s é %.2f\n", cidade1, pib1, cidade2, pib2);
                printf("O Super Poder da Cidade %s é %.2f e o Super Poder da Cidade %s é %.2f\n", cidade1, superpoder1, cidade2, superpoder2);
                pib1 + superpoder1 > pib2 + superpoder2 ? printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta1, carta2, carta1) : printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta2, carta1, carta2);
                pib1 + superpoder1 == pib2 + superpoder2 ? printf("As cartas %s e %s tem a mesma pontuacao, entao temos um empate!\n", carta1, carta2) : printf("");
        } else if (escolha1 == 4 && escolha2 == 5) {
                printf("Comparacao entre Turisticos e Densidade Populacional:\n");
                printf("Os pontos Turisticos da Cidade %s são %d e os pontos Turisticos da Cidade %s são %d\n", cidade1, turisticos1, cidade2, turisticos2);
                printf("A Densidade Populacional da Cidade %s é %.2f e a Densidade Populacional da Cidade %s é %.2f\n", cidade1, densidade1, cidade2, densidade2);
                turisticos1 + densidade1 > turisticos2 + densidade2 ? printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta1, carta2, carta1) : printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta2, carta1, carta2);
                turisticos1 + densidade1 == turisticos2 + densidade2 ? printf("As cartas %s e %s tem a mesma pontuacao, entao temos um empate!\n", carta1, carta2) : printf("");
        } else if (escolha1 == 4 && escolha2 == 6) {
                printf("Comparacao entre Turisticos e PIB per Capita:\n");
                printf("Os pontos Turisticos da Cidade %s são %d e os pontos Turisticos da Cidade %s são %d\n", cidade1, turisticos1, cidade2, turisticos2);
                printf("O PIB per Capita da Cidade %s é %.2f e o PIB per Capita da Cidade %s é %.2f\n", cidade1, perCapita1, cidade2, perCapita2);
                turisticos1 + perCapita1 > turisticos2 + perCapita2 ? printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta1, carta2, carta1) : printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta2, carta1, carta2);
                turisticos1 + perCapita1 == turisticos2 + perCapita2 ? printf("As cartas %s e %s tem a mesma pontuacao, entao temos um empate!\n", carta1, carta2) : printf("");
        } else if (escolha1 == 4 && escolha2 == 7) {
                printf("Comparacao entre Turisticos e Super Poder:\n");
                printf("Os pontos Turisticos da Cidade %s são %d e os pontos Turisticos da Cidade %s são %d\n", cidade1, turisticos1, cidade2, turisticos2);
                printf("O Super Poder da Cidade %s é %.2f e o Super Poder da Cidade %s é %.2f\n", cidade1, superpoder1, cidade2, superpoder2);
                turisticos1 + superpoder1 > turisticos2 + superpoder2 ? printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta1, carta2, carta1) : printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta2, carta1, carta2);
                turisticos1 + superpoder1 == turisticos2 + superpoder2 ? printf("As cartas %s e %s tem a mesma pontuacao, entao temos um empate!\n", carta1, carta2) : printf("");
        } else if (escolha1 == 5 && escolha2 == 6) {
                printf("Comparacao entre Densidade Populacional e PIB per Capita:\n");
                printf("A Densidade Populacional da Cidade %s é %.2f e a Densidade Populacional da Cidade %s é %.2f\n", cidade1, densidade1, cidade2, densidade2);
                printf("O PIB per Capita da Cidade %s é %.2f e o PIB per Capita da Cidade %s é %.2f\n", cidade1, perCapita1, cidade2, perCapita2);
                densidade1 + perCapita1 > densidade2 + perCapita2 ? printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta1, carta2, carta1) : printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta2, carta1, carta2);
                densidade1 + perCapita1 == densidade2 + perCapita2 ? printf("As cartas %s e %s tem a mesma pontuacao, entao temos um empate!\n", carta1, carta2) : printf("");
        } else if (escolha1 == 6 && escolha2 == 7) {
                printf("Comparacao entre PIB per Capita e Super Poder:\n");
                printf("O PIB per Capita da Cidade %s é %.2f e o PIB per Capita da Cidade %s é %.2f\n", cidade1, perCapita1, cidade2, perCapita2);
                printf("O Super Poder da Cidade %s é %.2f e o Super Poder da Cidade %s é %.2f\n", cidade1, superpoder1, cidade2, superpoder2);
                perCapita1 + superpoder1 > perCapita2 + superpoder2 ? printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta1, carta2, carta1) : printf("A carta %s tem uma maior pontuacao que a carta %s, entao %s vence!\n", carta2, carta1, carta2);
                perCapita1 + superpoder1 == perCapita2 + superpoder2 ? printf("As cartas %s e %s tem a mesma pontuacao, entao temos um empate!\n", carta1, carta2) : printf("");
        } else {
                printf("Escolha invalida.\n");
        }

        return 0;
}