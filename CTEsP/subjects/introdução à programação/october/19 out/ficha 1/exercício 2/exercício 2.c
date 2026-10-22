#include <stdio.h>
#include <stdlib.h>

int main () {
  float fahrenheit, resultado;

  printf("Escreva o valor em graus fahrenheit: ");
  fflush(stdin);
  scanf("%f", &fahrenheit);

  resultado = (fahrenheit - 32) / 1.8;

  printf("O valor em celsius é de: %.2f\n", resultado);
}