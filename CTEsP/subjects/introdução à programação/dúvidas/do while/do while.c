#include <stdio.h>
#include <stdlib.h>

int main () {
  int numero;

  do {
    printf("Insira um número negativo: ");
    scanf("%d", &numero);
  } while (numero >= 0);

  printf("O número é valido.\n");

  return 0;
}

// Usar o do while para o projeto de JavaScript.