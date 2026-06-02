#include <stdio.h>

int main(){
    int opcao;
    float nota1, nota2, media;

    printf("Menu de Gerenciamento de Estudantes\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Calcular a média\n");
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);
        
            if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10) {
                media = (nota1 + nota2) / 2;
                printf("A média do aluno é: %.2f\n", media);
            } else {
                printf("Entrada com valores errados de notas!\n");
            }
            break;
        case 2:
            printf("Determinar o status do aluno\n");
            printf("Entrar com a média do aluno: ");
            scanf("%f", &media);
            media >= 5 ? printf("Aluno Aprovado\n") : printf("Aluno Reprovado\n");
            break;
        case 3:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção inválida. Por favor, escolha uma opção válida.\n");
            break;
    }

    return 0;
}