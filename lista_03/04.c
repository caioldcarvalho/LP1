#include <stdio.h>

int main() {
    int vetor[15], maior, menor, soma = 0;
    int posMaior[15], posMenor[15], qMaior = 0, qMenor = 0;

    // Entrada de dados
    printf("Informe 15 numeros (entre 0 e 20):\n");
    for (int i = 0; i < 15; i++) {
        do {
            printf("Numero %d: ", i + 1);
            scanf("%d", &vetor[i]);
            if (vetor[i] < 0 || vetor[i] > 20) {
                printf("Valor invalido! Tente novamente.\n");
            }
        } while (vetor[i] < 0 || vetor[i] > 20);

        soma += vetor[i];

        if (i == 0) {
            maior = menor = vetor[i];
            posMaior[qMaior++] = i;
            posMenor[qMenor++] = i;
        } else {
            if (vetor[i] > maior) {
                maior = vetor[i];
                qMaior = 0;
                posMaior[qMaior++] = i;
            } else if (vetor[i] == maior) {
                posMaior[qMaior++] = i;
            }

            if (vetor[i] < menor) {
                menor = vetor[i];
                qMenor = 0;
                posMenor[qMenor++] = i;
            } else if (vetor[i] == menor) {
                posMenor[qMenor++] = i;
            }
        }
    }

    // Exibição dos resultados
    printf("\nNumeros informados: ");
    for (int i = 0; i < 15; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\nMaior: %d nas posicoes: ", maior);
    for (int i = 0; i < qMaior; i++) {
        printf("%d ", posMaior[i]);
    }
    printf("\nMenor: %d nas posicoes: ", menor);
    for (int i = 0; i < qMenor; i++) {
        printf("%d ", posMenor[i]);
    }
    printf("\nMedia: %.2f\n", soma / 15.0);

    return 0;
}

