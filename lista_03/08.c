#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[10], temp;

    // Gerando números aleatórios
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        vetor[i] = (rand() % 30) + 1;
    }

    // Exibindo o vetor original
    printf("Vetor gerado originalmente:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    // Trocando as posições
    for (int i = 0; i < 5; i++) {
        temp = vetor[i];
        vetor[i] = vetor[9 - i];
        vetor[9 - i] = temp;
    }

    // Exibindo o vetor modificado
    printf("\n\nVetor apos as trocas:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

