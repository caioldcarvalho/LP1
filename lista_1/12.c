// Exercício 12

#include <stdio.h>
#include <stdlib.h>

int main() {
  float max, velocidade, multa;
  const int TAXA_MULTA = 5;

  printf("Insira a velocidade máxima permitida e a velocidade do motorista.\n");
  scanf("%f %f", &max, &velocidade);

  if (velocidade > max) {
    multa = (velocidade - max) * 5;

    printf("O valor da multa é de R$%.2f\n", multa);
  } else {
    printf("Não houve multa porque a velocidade está dentro do permitido\n");
  }

  return 0;
}
