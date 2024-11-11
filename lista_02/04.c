// Exercício 04
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool is_prime = 1;
    int i, j;

    /* Percorerndo de 11 a 600, de 2 em 2 porque, dessa forma, ignora-se todos os números
      * pares, que sempre serão não-primos (exceto 2, que já foi excluído por estarmos iniciando
      * em 10)
      */

    for (i = 11; i <= 600; i+=2) {
        is_prime = 1;
        for (j = i - 1; j > 1; j--) {
            if (i % j == 0) {
                is_prime = 0;
                continue;
            }
        }

        if (is_prime) {
            printf("%d é primo\n", i);
        }

    }

    return 0;
}
