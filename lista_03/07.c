#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para ordenar o vetor (Bubble Sort)
void ordenarCrescente(int vetor[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    int vetor[30];

    // Gerando números aleatórios
    srand(time(NULL));
    for (int i = 0; i < 30; i++) {
        vetor[i] = (rand() % 60) + 1;
    }

    // Exibindo o vetor original
    printf("Vetor gerado:\n");
    for (int i = 0; i < 30; i++) {
        printf("%d ", vetor[i]);
    }

    // Ordenando o vetor
    ordenarCrescente(vetor, 30);

    // Exibindo o vetor ordenado
    printf("\n\nVetor ordenado:\n");
    for (int i = 0; i < 30; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

