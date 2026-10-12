#include <stdio.h>
#include <stdlib.h>

int main () {
  float celcius, resultado;

  printf("escreva o valor em graus celcius: ");
  fflush(stdin);
  scanf("%f", &celcius);

  resultado = (celcius * 1.8) + 32;

  printf("o valor em fahrenheit é de: %.2f", resultado);
}