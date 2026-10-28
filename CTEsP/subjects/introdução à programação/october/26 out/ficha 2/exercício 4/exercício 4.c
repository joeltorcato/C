#include <stdio.h>
#include <stdlib.h>

double raio () {
  double raio, volumeEsfera;

  printf("Insira o valor do raio da esfera: ");
  scanf("%lf", &raio);

  volumeEsfera = (4 * 3.14 * (raio * raio * raio)) / 3;

  printf("O volume da esfera com raio %.2lf é de %.2lf cm³\n", raio, volumeEsfera);
}

int main () {
  raio();
  return 0;
}