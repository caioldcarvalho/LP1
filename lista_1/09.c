#include <stdio.h>
#include <stdlib.h>

int main() {
  int n1, n2;

  printf("Insira 2 valores a serem comparados: ");
  scanf("%d %d", &n1, &n2);

  if(n1==n2) {
    printf("São iguais.\n");
  } else if(n1>n2) {
    printf("%d é maior que %d\n", n1, n2);
  } else {
    printf("%d é maior que %d\n", n2, n1);
  }

  return 0;
}
