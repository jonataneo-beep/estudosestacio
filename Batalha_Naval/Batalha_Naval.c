#include <stdio.h>

int main() {
    char linha[10]= {'A','B','C','D','E','F','G','H','I','J'};
    // 1. Criando o Tabuleiro (Matriz 10x10)
    int tabuleiro[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; // Inicializa o tabuleiro com 0 (água)
        }
    }
    // 2. Exibindo o Tabuleiro
    printf("  ");
   for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]);
    }
    printf("\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i-1][j]);
        }
        printf("\n");
    }
// Inserir navios no tabuleiro (exemplo)
    tabuleiro[0][0] = 3; // Navio na posição A1
    tabuleiro[1][0] = 3; // Navio na posição A2
    tabuleiro[2][0] = 3; // Navio na posição A3
    tabuleiro[1][5] = 3; // Navio na posição F2
    tabuleiro[1][6] = 3; // Navio na posição G2
    tabuleiro[1][7] = 3; // Navio na posição H2

// Exibir o tabuleiro atualizado
    printf("\nTabuleiro atualizado:\n");
    printf("  ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]);
    }
    printf("\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d- ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i-1][j]);
        }
        printf("\n");
    }





    return 0;
}