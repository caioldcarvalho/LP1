#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor_em_metros;

    printf("Bem vindo!\nInsira um valor em m (metros), para ser convertido em decímetros e em centímetros. \nValor:");
    scanf("%f", &valor_em_metros);

    printf("Valor original: %.2f\n", valor_em_metros);
    printf("Valor em decímetros: %.2f\n", valor_em_metros * 10);
    printf("Valor em centímetros: %.2f\n", valor_em_metros * 100);
    printf("Valor em milímetros: %.2f\n", valor_em_metros * 1000);

    return 0;
}
