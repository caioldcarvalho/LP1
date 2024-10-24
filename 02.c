#include <stdio.h>
#include <stdlib.h>

/* Exercício 2
 * Fazer um programa que solicita do usuário um tempo em segundos, correspondente à duração de um evento qualquer. Calcular e mostrar ao usuário o tempo equivalente em horas, minutos e segundos.
 * */

int main(){
    int segundos, minutos, horas;

    printf("Bem vindo!\nInsira um valor em s (segundos), para ser convertido em minutos e em horas. \nValor:");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundos = (segundos % 3600) % 60;

    printf("Duração: %d horas %d minutos %d segundos\n", horas, minutos, segundos);

    return 0;
}
