#include <stdio.h>

int main () {
  double metros;

  printf("escreve o valor em metros: ");
  scanf("%lf", &metros);

  printf("\ndecímetros: %.1lf\n", metros * 10);
  printf("centímetros: %.1lf\n", metros * 100);
  printf("milímetros: %.1lf\n\n", metros * 1000);
}