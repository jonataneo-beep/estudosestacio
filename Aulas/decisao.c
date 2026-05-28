#include <stdio.h>

int main() {
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a temperatura:\n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade:\n");
    scanf("%f", &umidade);
    printf("Entre com o estoque:\n");
    scanf("%u", &estoque);

    if (temperatura > 30) {
        printf("Temperatura alta detectada.\n");
    } else {
        printf("Temperatura normal.\n");
    }

    if (umidade > 50) {
        printf("Umidade alta detectada.\n");
    } else {
        printf("Umidade normal.\n");
    }
    if (estoque < estoqueMinimo) {
        printf("Estoque abaixo do mínimo.\n");
    } else {
        printf("Estoque suficiente.\n");
    }
    return 0;
}