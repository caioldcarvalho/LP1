#include <stdio.h>

int main() {
    int fibonacci[30];

    // Gerando a sequência Fibonacci
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (int i = 2; i < 30; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    // Exibindo a sequência
    printf("Sequencia Fibonacci (30 primeiros termos):\n");
    for (int i = 0; i < 30; i++) {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");

    return 0;
}

