// Ex02

#include <stdio.h>
#include <stdlib.h>

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
