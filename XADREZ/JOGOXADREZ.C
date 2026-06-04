#include <stdio.h>

void movimentoTorre(int casas) {
    if (casas > 0) {
        movimentoTorre(casas - 1);
        printf("A torre se moveu para a Direita %d x\n", casas);
    }
}
void movimentoBispo() {
    int bispo;
    for (bispo = 0; bispo < 5; bispo++) {
        printf("O bispo se moveu para 'Cima, Direita' %d x\n", bispo + 1);
    }
}
void movimentoRainha() {
    int rainha;
    for (rainha = 0; rainha < 8; rainha++) {
        printf("A rainha se moveu para Esquerda %d x\n", rainha + 1);
    }
}

int main() {

int torre, cavalo, escolha;

printf("Digite a quantidade de casas que a torre deve se mover para a direita:\n");
scanf("%d", &torre);

movimentoTorre(torre);
movimentoBispo();
movimentoRainha();

printf("\n");


    do {
        printf("Escolha o movimento do cavalo:\n");
        printf("1. Baixo/Esquerda\n");
        printf("2. Baixo/Direita\n");
        printf("3. Cima/Esquerda\n");
        printf("4. Cima/Direita\n");
        printf("5. Esquerda/Baixo\n");
        printf("6. Esquerda/Cima\n");
        printf("7. Direita/Baixo\n");
        printf("8. Direita/Cima\n");
        printf("Qual movimento do cavalo você deseja realizar? (1-8): ");
        scanf("%d", &escolha);
        switch (escolha) {
            case 1:
                printf("Você escolheu Baixo/Esquerda\n");
                    for (cavalo = 0; cavalo < 2; cavalo++) {
                        printf("O cavalo se moveu para Baixo %d x\n", cavalo + 1);
                        if (cavalo == 1) {
                            for (int j = 0; j < 1; j++) {
                                printf("O cavalo se moveu para Esquerda %d x\n", cavalo);}}}
                break;
            case 2:
                printf("Você escolheu Baixo/Direita\n");
                for (cavalo = 0; cavalo < 2; cavalo++) {
                    printf("O cavalo se moveu para Baixo %d x\n", cavalo + 1);
                    if (cavalo == 1) {
                        for (int j = 0; j < 1; j++) {
                            printf("O cavalo se moveu para Direita %d x\n", cavalo);}}}
                break;
            case 3:
                printf("Você escolheu Cima/Esquerda\n");
                for (cavalo = 0; cavalo < 2; cavalo++) {
                    printf("O cavalo se moveu para Cima %d x\n", cavalo + 1);
                    if (cavalo == 1) {
                        for (int j = 0; j < 1; j++) {
                            printf("O cavalo se moveu para Esquerda %d x\n", cavalo);}}}
                break;
            case 4:
                printf("Você escolheu Cima/Direita\n");
                for (cavalo = 0; cavalo < 2; cavalo++) {
                    printf("O cavalo se moveu para Cima %d x\n", cavalo + 1);
                    if (cavalo == 1) {
                        for (int j = 0; j < 1; j++) {
                            printf("O cavalo se moveu para Direita %d x\n", cavalo);}}}
                break;
            case 5:
                printf("Você escolheu Esquerda/Baixo\n");
                for (cavalo = 0; cavalo < 2; cavalo++) {
                    printf("O cavalo se moveu para Esquerda %d x\n", cavalo + 1);
                    if (cavalo == 1) {
                        for (int j = 0; j < 1; j++) {
                            printf("O cavalo se moveu para Baixo %d x\n", cavalo);}}}
                break;
            case 6:
                printf("Você escolheu Esquerda/Cima\n");
                for (cavalo = 0; cavalo < 2; cavalo++) {
                    printf("O cavalo se moveu para Esquerda %d x\n", cavalo + 1);
                    if (cavalo == 1) {
                        for (int j = 0; j < 1; j++) {
                            printf("O cavalo se moveu para Cima %d x\n", cavalo);}}}
                break;
            case 7:
                printf("Você escolheu Direita/Baixo\n");
                for (cavalo = 0; cavalo < 2; cavalo++) {
                    printf("O cavalo se moveu para Direita %d x\n", cavalo + 1);
                    if (cavalo == 1) {
                        for (int j = 0; j < 1; j++) {
                            printf("O cavalo se moveu para Baixo %d x\n", cavalo);}}}
                break;
            case 8:
                printf("Você escolheu Direita/Cima\n");
                for (cavalo = 0; cavalo < 2; cavalo++) {
                    printf("O cavalo se moveu para Direita %d x\n", cavalo + 1);
                    if (cavalo == 1) {
                        for (int j = 0; j < 1; j++) {
                            printf("O cavalo se moveu para Cima %d x\n", cavalo);}}}
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }    } while (escolha < 1 || escolha > 8);

    return 0;    
}