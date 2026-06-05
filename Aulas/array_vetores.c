#include <stdio.h>

int main() {

    char *nome[] = {"Alice", "Bob", "Carol"};
        int i;
        for (i = 0; i < 3; i++) {
            printf("%s\n", nome[i]);
        }

    return 0;
}