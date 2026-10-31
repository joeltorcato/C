#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double volumeEsfera(double raio)
{
  double volume = (4 * M_PI * (raio * raio * raio)) / 3;

  return volume;
}

int main()
{
  double raio;

  printf("Insira o valor do raio da esfera: ");
  scanf("%lf", &raio);

  // float resultado = volumeEsfera(raio); optional

  printf("O volume da esfera com raio %.2lf é de %.2lf cm³\n", raio, volumeEsfera(raio));

  return 0;
}