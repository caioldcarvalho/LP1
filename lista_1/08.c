// Ex08

#include <stdio.h>
#include <math.h>

int main() {
  const float GRAVIDADE = 9.81;
  float velocidade_inicial, angulo_graus;

  printf("Insira a velocidade inicial em m/s e o angulo de lançamento em graus:");
  scanf("%f %f", &velocidade_inicial, &angulo_graus);

  float angulo_radianos = angulo_graus * (M_PI / 180.0);

  double distancia = (pow(velocidade_inicial,2) * sin(2 * angulo_radianos)) / GRAVIDADE;

  printf("O projétil cai a uma distância de %.2fm.\n", distancia);

  return 0;
}
