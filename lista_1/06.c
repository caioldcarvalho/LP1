//Ex06

#include <stdio.h>
#include <stdlib.h>

int main() {
  float tamanho_comodo;

  printf("Insira o tamanho do cômodo: \n");
  scanf("%f", &tamanho_comodo);

  printf("A quantidade de lâmpadas necessárias para iluminar este cômodo é %f\n", ceil(tamanho_comodo, 4));

  return 0;
}