#include <stdio.h>
#include <stdlib.h>

float numeroIntermedio () {
  float n1, n2, n3;

  printf("Insira o primeiro número inteiro: ");
  scanf("%f", &n1);

  printf("Insira o segundo número inteiro: ");
  scanf("%f", &n2);

  printf("Insira o terceiro número inteiro: ");
  scanf("%f", &n3);

  if (n1 < n2 && n2 < n3 || (n1 > n2 && n2 > n3)) {
    printf("O valor intermédio, é o %.2f\n", n2);
  } else if (n2 < n1 && n1 < n3 || (n2 > n1 && n1 > n3)) {
    printf("O valor intermédio, é o %.2f\n", n1);
  } else if (n2 < n3 && n3 < n1 || (n2 > n3 && n3 > n1)) {
    printf("O valor intermedio é o %.2f\n", n3);
  } else {
    printf("Insira um valor válido\n");
  }
}

int main () {
  numeroIntermedio();

  return 0;
}

// Check if there is a best way to do