// Exercício 07

#include <stdio.h>

int main() {
    int num, aux,;

    printf("Insira um valor maior que 50 e menor que 1000: ");
    scanf("%d", &num);

    if(num <= 50 || num >= 1000) {
        // Sim, eu poderia manter o usuário em um loop até que ele insira o valor dentro do escopo.
        // Porém, como no enunciado isso não foi explicitamente solicitado, apenas fiz o usuário
        // ser expulso do programa caso insira um valor fora do escopo.
        printf("Valor fora do escopo! tente novamente com um valor entre 50 e 1000.");
        return 0;
    }

    aux = 2;
    while (num > 1) {
        if (num % aux == 0) {
            printf("%d\n", aux);
            num/= aux;
            continue;
        }
        aux++;
    }


    return 0;
}