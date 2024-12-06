#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool ehPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int vetor[20];
    char repetir;

    do {
        // Gerando números aleatórios
        srand(time(NULL));
        for (int i = 0; i < 20; i++) {
            vetor[i] = (rand() % 200) + 1;
        }

        // Exibindo o vetor gerado
        printf("\nVetor gerado:\n");
        for (int i = 0; i < 20; i++) {
            printf("%d ", vetor[i]);
        }

        // Verificando e exibindo números primos
        printf("\n\nNumeros primos no vetor:\n");
        bool temPrimos = false;
        for (int i = 0; i < 20; i++) {
            if (ehPrimo(vetor[i])) {
                printf("%d ", vetor[i]);
                temPrimos = true;
            }
        }
        if (!temPrimos) {
            printf("Nao ha numeros primos nesse vetor.");
        }

        // Repetir ou encerrar
        printf("\n\nDeseja repetir o processo? (s/n): ");
        scanf(" %c", &repetir);
    } while (repetir == 's' || repetir == 'S');

    return 0;
}

