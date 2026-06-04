#include <stdio.h>

void movimentoTorre() {
    int torre;
    for (torre = 0; torre < 5; torre++) {
        printf("A torre se moveu para a Direita %d x\n", torre + 1);
    }
}

int main() {
    movimentoTorre();
    return 0;
}