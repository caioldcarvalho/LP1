#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[30], num;

    // Gerando números aleatórios
    srand(time(NULL));
    for (int i = 0; i < 30; i++) {
        vetor[i] = (rand() % 100) + 1;
    }

    // Entrada do usuário
    printf("Informe um numero para buscar no vetor: ");
    scanf("%d", &num);

    // Procurando o número
    int encontrado = 0;
    printf("\nPosicoes do numero %d: ", num);
    for (int i = 0; i < 30; i++) {
        if (vetor[i] == num) {
            printf("%d ", i);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Valor nao encontrado.\n");
    }

    // Exibindo o vetor
    printf("\n\nVetor gerado: ");
    for (int i = 0; i < 30; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

