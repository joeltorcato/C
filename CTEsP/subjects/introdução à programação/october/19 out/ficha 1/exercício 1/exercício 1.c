#include <stdio.h>
#include <stdlib.h>

int main () {
  int numero;

  printf("Insira um número inteiro: ");
  scanf("%d", &numero);

  if (numero >= 10) {
    printf("O número inserido é maior ou igual a 10\n");
  } else {
    printf("O número inserido é menor que 10\n");
  }
}
