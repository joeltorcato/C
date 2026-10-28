#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double volumeEsfera(double raio) {
  double volume = (4 * M_PI * (raio * raio * raio)) / 3;

  return volume;
}

int main () {
  double raio;

  printf("Insira o valor do raio da esfera: ");
  scanf("%lf", &raio);

  double resultado = volumeEsfera(raio);
  printf("O volume da esfera com raio %.2lf é de %.2lf cm³\n", raio, resultado);

  return 0;
}