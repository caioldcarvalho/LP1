// Exercício 17

#include <stdio.h>
#include <stdlib.h>

int main() {
  float altura, peso;
  char sexo;

  printf("Insira altura em m e o sexo (M ou F): ");
  scanf("%f %c", &altura, &sexo);

  if (sexo == 'M') {
    peso = (72.7 * altura) - 58;
  } else if (sexo == 'F')
  {
    peso = (62.1 * altura) - 44.7;
  }
  

  printf("O peso ideal é: %f", peso);

  return 0;
}