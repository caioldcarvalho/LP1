#include <stdio.h>

int main() {
    int numeros[20];
    int maior, menor, soma = 0;
    float media;

    // Entrada de dados
    printf("Informe 20 numeros inteiros:\n");
    for (int i = 0; i < 20; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
        if (i == 0) {
            maior = menor = numeros[i];
        } else {
            if (numeros[i] > maior) maior = numeros[i];
            if (numeros[i] < menor) menor = numeros[i];
        }
    }

    media = soma / 20.0;

    // Exibição dos resultados
    printf("\nNumeros informados: ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\nMaior: %d\nMenor: %d\nMedia: %.2f\n", maior, menor, media);

    return 0;
}


