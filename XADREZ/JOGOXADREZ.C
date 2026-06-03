#include <stdio.h>

int main() {

int torre, bispo = 0, rainha = 0;    

for (torre = 0; torre < 5; torre++) {
    printf("A torre se moveu para a Direita %d x\n", torre + 1);
}
while (bispo < 5)
{
    printf("O bispo se moveu para 'Cima, Direita' %d x\n", bispo + 1);
    bispo++;
}
do
{   printf("A rainha se moveu para Esquerda %d x\n", rainha + 1);
    rainha++;
} while (rainha <= 7);


    return 0;    
}