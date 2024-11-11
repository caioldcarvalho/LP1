// Exercício 06

#include <stdio.h>

int main() {
    int a, b, maior, menor, aux;

    do {
        printf("Insira dois número naturais separados por espaço: ");
        scanf("%d %d", &a, &b);
    } while ((a < 0) || (b < 0));

    maior = (a > b) ? a : b;
    menor = (a > b) ? b : a;

    while (maior > 0) {
        if(maior < menor) {
            // Essa lógica inverte 2 números inteiros sem utilizar uma variável auxiliar
            maior = maior + menor;
            menor = maior - menor;
            maior = maior - menor;
        }

        maior = maior - menor;
        // printf("%d\n", menor);
    }

    printf("O MDC é: %d", menor);

    return 0;
}