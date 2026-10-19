#include <stdio.h>
#include <stdlib.h>

int main () {
  float fahrenheit, resultado;

  printf("escreva o valor em graus fahrenheit: ");
  fflush(stdin);
  scanf("%f", &fahrenheit);

  resultado = (fahrenheit - 32) / 1.8;

  printf("o valor em fahrenheit é de: %.2f\n", resultado);
}