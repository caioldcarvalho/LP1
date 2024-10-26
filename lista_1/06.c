#include <stdio.h>
#include <stdlib.h>

int main() {
  const int boa_luminosidade = 15, watts_por_lampada = 60;
  float tamanho_comodo;

  printf("Insira o tamanho do cômodo: \n");
  scanf("%f", &tamanho_comodo);

  float watts_necessarios = tamanho_comodo * boa_luminosidade;

  printf("A quantidade de lâmpadas necessárias para iluminar este cômodo é %f\n", watts_necessarios / watts_por_lampada);

  return 0;
}
