#include <stdio.h>
#include <stdlib.h>

// calcula área de um triângula
// área = (base * altura) / 2

int main () {
  float area, base, altura;

  printf("escreva o valor da base: ");
  fflush(stdin);
  scanf("%f", &base);

  printf("escreva o valor da altura: ");
  fflush(stdin);
  scanf("%f", &altura);

  area = (base * altura) / 2;

  printf("a área do triângulo é: %.2f\n", area);

  return 0;
}