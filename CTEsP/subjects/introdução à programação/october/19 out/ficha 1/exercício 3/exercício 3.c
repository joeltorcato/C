#include <stdio.h>
#include <stdlib.h>

int main () {
  float resultado;

  for (int celsius = 10; celsius <= 20; celsius++) {
    resultado = (celsius * 1.8) + 32;
    printf("%d celsius -> %.2f fahrenheit\n", celsius, resultado);
  }
}