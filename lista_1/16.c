// Exercício 16

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  float peso, altura, imc;

  // IMC = peso / (altura )2

  printf("Insira o peso em Kg e a altura em m: ");
  scanf("%f %f", &peso, &altura);

  imc = peso / pow(altura, 2);

  printf("O IMC é: %f ", imc);

  if (imc < 18.5) {
    printf("(abaixo do peso).");
  } else if (imc >= 18.5 && imc < 25) {
    printf("(peso ideal).");
  } else if (imc >= 25 && imc < 30) {
    printf("(acima do peso).");
  } else {
    printf("(obesidade).");
  }

  return 0;
}