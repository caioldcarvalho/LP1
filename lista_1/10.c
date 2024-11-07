// Ex10

#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b;

  printf("Insira dois valores a serem comparados: \n");
  scanf("%d %d", &a, &b);

  if ((a % b) == 0) {
    printf("%d é divisível por %d\n", a, b);

    return 0;
  }

    printf("%d não é divisível por %d\n", a, b);

  return 0;
}
