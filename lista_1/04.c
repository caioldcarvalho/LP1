#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    printf("Insira um número inteiro: ");
    scanf("%d", &num);

    printf("Antecessor: %d\n", num - 1);
    printf("Sucessor: %d\n", num + 1);
}