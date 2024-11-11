// Exercício 03
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool is_prime = 1;
    int num, i;

    printf("Insira um número: ");
    scanf("%d", &num);

    for (i = num - 1; i > 1; i--) {
        printf("%d\n", i);
        if (num % i == 0) {
            printf("%d é divisível por %d\n", num, i);
            is_prime = 0;
            continue;
        }
    }

    if (is_prime) {
        printf("%d é primo", num);
    } else {
        printf("%d não é primo", num);
    }

    return 0;
}
