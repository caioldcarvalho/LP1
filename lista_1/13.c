// Exercício 13

#include <stdio.h>
#include <stdlib.h>

int main() {
  float valor_da_hora, acrescimo, salario_final;
  int horas_trabalhadas;

  printf("Insira o valor da hora e a quantidade de horas trabalhadas\n");
  scanf("%f %d", &valor_da_hora, &horas_trabalhadas);

  if (horas_trabalhadas < 40) {
    printf("O salário final é igual ao salário base, pois não houve horas-extra.\n");
  } else if (horas_trabalhadas >= 40 && horas_trabalhadas <= 60) {
    acrescimo = ((horas_trabalhadas - 40) * 1.5 * valor_da_hora);
    printf("O salário final é %f\n", horas_trabalhadas * valor_da_hora + acrescimo);

  } else if (horas_trabalhadas > 60) {
    acrescimo = ((horas_trabalhadas - 40) * 2 * valor_da_hora);
    printf("O salário final é %f\n", horas_trabalhadas * valor_da_hora + acrescimo);
  }

  return 0;
}
