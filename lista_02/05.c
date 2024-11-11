// Exercício 05

#include <stdio.h>

int main() {
    int a, b, x, y, z;

    printf("Insira o valor de a: ");
    scanf("%d", &a);

    do {
        printf("Insira o valor de b: ");
        scanf("%d", &b);
    } while (b < a);

    do {
        printf("Insira o valor de z: ");
        scanf("%d", &z);
    } while (z <= b);
    

    /* Pela forma como o enunciado foi feito, é possível sempre selecionar x = a + 1, e y se torna
     * um valor que variará de acordo com z.
    */
    x = a + 1;
    y = z - x;

    printf("%d + %d = %d", x, y, z);

    return 0;
}