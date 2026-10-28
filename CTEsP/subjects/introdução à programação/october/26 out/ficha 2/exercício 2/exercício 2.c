#include <stdio.h>
#include <stdlib.h>

void numeroIntermedio () {
  int n1, n2, n3;

  printf("Insira o primeiro número inteiro: ");
  scanf("%d", &n1);

  printf("Insira o segundo número inteiro: ");
  scanf("%d", &n2);

  printf("Insira o terceiro número inteiro: ");
  scanf("%d", &n3);

  if (n1 < n2 && n2 < n3 || (n1 > n2 && n2 > n3)) {
    printf("O valor intermédio, é o %d\n", n2);
  } else if (n2 < n1 && n1 < n3 || (n2 > n1 && n1 > n3)) {
    printf("O valor intermédio, é o %d\n", n1);
  } else if (n2 < n3 && n3 < n1 || (n2 > n3 && n3 > n1)) {
    printf("O valor intermedio é o %d\n", n3);
  } else {
    printf("Insira um valor válido\n");
  }
}

int main () {
  numeroIntermedio();

  return 0;
}