#include <stdio.h>
#include <stdlib.h>

int main() {
  float hora_aula, desconto_INSS, salario_liquido;
  int qtd_aulas;

  printf("Insira o valor da hora/aula, a quantidade de aulas e o desconto do INSS em percentual:");
  scanf("%f %d %f", &hora_aula, &qtd_aulas, &desconto_INSS);

  salario_liquido = (hora_aula * qtd_aulas) * (1 - (desconto_INSS / 100));

  printf("O salário líquido é de R$%.2f.\n", salario_liquido);

  return 0;
}
