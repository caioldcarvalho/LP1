// Exercício 11

#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, y, z, soma_xy;

  printf("Insira 3 valores.\n");
  scanf("%d %d %d", &x, &y, &z);

  soma_xy = x + y;

  if (soma_xy == z) {
    printf("%d + %d é igual a %d\n", x, y, z);

    return 0;
  }
  if (soma_xy > z) {
    printf("%d + %d é maior que %d\n", x, y, z);

    return 0;
  }
  if (soma_xy < z) {
    printf("%d + %d é menor que %d\n", x, y, z);

    return 0;
  }

  return 0;
}
