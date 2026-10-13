#include <stdio.h>
#include <stdlib.h>

int main () {
  float celsius, resultado;

  printf("escreva o valor em graus celsius: ");
  fflush(stdin);
  scanf("%f", &celsius);

  resultado = (celsius * 1.8) + 32;

  printf("o valor em fahrenheit é de: %.2f\n", resultado);
}