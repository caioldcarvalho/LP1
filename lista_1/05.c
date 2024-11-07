// Ex05

#include <stdio.h>
#include <stdlib.h>

int main() {
  const int KM_POR_LITRO = 15;
  float tempo_de_viagem, velocidade_media;

  printf("Insira o tempo de viagem em horas e a velocidade média em Km/h: ");
  scanf("%f %f", &tempo_de_viagem, &velocidade_media);

  printf("O consumo de combustível foi: %.2fL.", (velocidade_media * tempo_de_viagem) / KM_POR_LITRO);

  return 0;
}
