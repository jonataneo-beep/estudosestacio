#include <stdio.h>

int main() {

    int numero;

do{
    printf("Digite um número par para sair: ");
    scanf("%d", &numero);
    printf("Você digitou: %d\n", numero);

    if (numero % 2 == 0) {
        printf("O número %d é par! Saindo...\n", numero);
    } else {
        printf("O número %d é ímpar! Tente novamente.\n", numero);
    }
} while (numero % 2 != 0);

printf("Você digitou um número par, saindo do programa....\n");
    return 0;
}