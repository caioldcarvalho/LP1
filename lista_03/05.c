#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[30], pares[30], impares[30];
    int qtdPares = 0, qtdImpares = 0;

    // Gerando números aleatórios
    srand(time(NULL));
    for (int i = 0; i < 30; i++) {
        vetor[i] = (rand() % 50) + 1;
        if (vetor[i] % 2 == 0) {
            pares[qtdPares++] = vetor[i];
        } else {
            impares[qtdImpares++] = vetor[i];
        }
    }

    // Exibindo os resultados
    printf("Vetor gerado:\n");
    for (int i = 0; i < 30; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n\nQuantidade de numeros pares: %d\n", qtdPares);
    printf("Numeros pares: ");
    for (int i = 0; i < qtdPares; i++) {
        printf("%d ", pares[i]);
    }

    printf("\n\nQuantidade de numeros impares: %d\n", qtdImpares);
    printf("Numeros impares: ");
    for (int i = 0; i < qtdImpares; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");

    return 0;
}

