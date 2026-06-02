#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    srand(time(0));
    numeroComputador = rand() % 100 + 1;

    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("você deve escolher um múmero e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação: \n");
    scanf(" %c", &tipoComparacao);

    printf("Digite seu número (entre 1 e 100): ");
    scanf("%d", &numeroJogador);

    printf("Número do computador: %d\n", numeroComputador);

    switch (tipoComparacao) {
        case 'M':
        case 'm':
            printf("Você escolheu a opção Maior.\n");
            resultado = (numeroJogador > numeroComputador) ? 1 : 0;
            printf("O número do computador é: %d e o número do jogador é: %d\n", numeroComputador, numeroJogador);
            break;
        case 'N':
        case 'n':
            printf("Você escolheu a opção Menor.\n");
            resultado = (numeroJogador < numeroComputador) ? 1 : 0;
            printf("O número do computador é: %d e o número do jogador é: %d\n", numeroComputador, numeroJogador);
            break;
        case 'I':
        case 'i':
            printf("Você escolheu a opção Igual.\n");
            resultado = (numeroJogador == numeroComputador) ? 1 : 0;
            printf("O número do computador é: %d e o número do jogador é: %d\n", numeroComputador, numeroJogador);
            break;
        default:
            printf("Opção de comparação inválida.\n");
            return 1;
    }

    if (resultado == 1) {
        printf("Parabéns! Você venceu.\n");
    } else {
        printf("Que pena! Você perdeu.\n");
    }
    return 0;

}