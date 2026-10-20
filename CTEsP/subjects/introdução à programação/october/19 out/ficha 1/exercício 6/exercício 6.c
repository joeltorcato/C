#include <stdio.h>
#include <stdlib.h>

int main () {
  float massa, altura, imc;

  printf("Diga a sua massa (peso) em kg: ");
  scanf("%f", &massa);

  printf("\nDiga a sua altura em metros: ");
  scanf("%f", &altura);

  imc = massa / (altura * altura);

  printf("\nCom a altura de %.2fm e a massa de %.1fkg o seu imc é de %.2f\n", altura, massa, imc);

  return 0;
}