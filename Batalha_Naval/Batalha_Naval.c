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
// Inserir navios no tabuleiro
// Navio na vertical (F2, G2, H2)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][5] = 3; // Navio na vertical (F2, G2, H2)
    }
// Navio na horizontal (A1, A2, A3)
    for (int i = 0; i < 3; i++) {
        tabuleiro[0][i] = 3; // Navio na horizontal (A1, A2, A3)
    }    
//Navio na diagonal (A1, B2, C3, D4, E5, F6, G7, H8, I9, J10)    
    for (int i = 7; i < 10; i++) {
        tabuleiro[i][i] = 3; // Navio na diagonal (A1, B2, C3, D4, E5, F6, G7, H8, I9, J10)
    } 
//Navio na diagonal (A10, B9, C8, D7, E6, F5, G4, H3, I2, J1)    
    for (int i = 6; i < 9; i++) {
        tabuleiro[i][9 - i] = 3; // Navio na diagonal (A10, B9, C8, D7, E6, F5, G4, H3, I2, J1)
    }


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