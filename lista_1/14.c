// Exercício 14~15

#include <stdio.h>
#include <stdlib.h>

int main() {
  int apos_time1, apos_time2, real_time1, real_time2, pontuacao = 0;

  printf("Insira o palpite do apostador para o placar do time 1 e depois do time 2\n");
  scanf("%d %d", &apos_time1, &apos_time2);

  printf("Insira o placar real do time 1 e depois do time 2\n");
  scanf("%d %d", &real_time1, &real_time2);

  if (apos_time1 == real_time1) {
      printf("Acertou a pontuação do time 1. (+5)\n");
      pontuacao += 5;
  }
  if (apos_time2 == real_time2) {
      printf("Acertou a pontuação do time 2. (+5)\n");
      pontuacao += 5;
  }

  if (real_time1 > real_time2) {
    // Time 1 venceu.
    if (apos_time1 > apos_time2) {
      printf("Acertou quem vence. (+10)\n");
      pontuacao += 10;
    }
  } else if (real_time1 < real_time2) {
    // Time 2 venceu.
    if (apos_time1 < apos_time2) {
      printf("Acertou quem vence. (+10)\n");
      pontuacao += 10;
    }
  }

  printf("Pontuação final: %d\n", pontuacao);

  return 0;
}
