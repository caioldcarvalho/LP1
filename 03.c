#include <stdio.h>
#include <stdlib.h>

int main(){
    float v1, v2, v3, v4, v5, v6, media1, media2;

    printf("Bem vindo!\nInsira 6 valores. Faremos algumas contas:\n");
    
    printf("Valor 1: ");
    scanf("%f", &v1);

    printf("Valor 2: ");
    scanf("%f", &v2);

    printf("Valor 3: ");
    scanf("%f", &v3);

    printf("Valor 4: ");
    scanf("%f", &v4);

    printf("Valor 5: ");
    scanf("%f", &v5);

    printf("Valor 6: ");
    scanf("%f", &v6);

    media1 = (v1 + v2 + v3) / 3;
    media2 = (v4 + v5 + v6) / 3;

    printf("Média dos 3 primeiros números: %f\n", media1);
    printf("Média dos 3 últimos números: %f\n", media2);
    printf("Soma das duas médias: %f\n", media1 + media2);

    return 0;
}
