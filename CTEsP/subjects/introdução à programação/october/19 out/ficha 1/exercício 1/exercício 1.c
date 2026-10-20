#include <stdio.h>
#include <stdlib.h>

int main () {
  int numero;

  printf("insira um número inteiro: ");
  scanf("%d", &numero);

  if (numero >= 10) {
    printf("o número inserido é maior ou igual a 10");
  } else {
    printf("o número inserido é menor que 10\n");
  }
}
