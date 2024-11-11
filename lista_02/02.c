// Exercício 02

#include <stdio.h>

int main() {
    /* Obs.: Imagino que a proposta inicial seja fazer esse exercício sem vetores.
     * No entanto, preferi fazer utilizando vetores, uma vez que dificilmente seria necessário
     * lidar com esse tipo de problema sem o uso de vetores numa situação real.
     */

    int numeros[10], i, maior = 0, menor = 0;
    double media, soma = 0;

    for(i=0;i<10;i++) {
        printf("Insira o valor n%d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    menor = numeros[0];

    for(i=0;i<10;i++) {
        soma = soma + numeros[i];

        // Preferi também utilizar operadores ternários, para evitar aninhamentos excessivos

        maior = (numeros[i] > maior) ? numeros[i] : maior;
        menor = (numeros[i] < menor) ? numeros[i] : menor;

    }

    media = soma / 10;

    printf("Maior número: %d\nMenor número: %d\nMédia aritmética: %f\n", maior, menor, media);

    return 0;
}
