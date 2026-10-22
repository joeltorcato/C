#include <stdio.h>
#include <stdlib.h>

int main () {
  int x, y;

  x = 10;
  y = ++x;
  
  printf("Valor de x: %d\n", x);
  printf("Valor de y: %d\n", y);
  getchar(); // faz o mesmo efeito que system("PAUSE")

  x = 10;
  y = x++; // O y com pós incremento nunca irá pegar o valor novo (= 11)


  printf("\nValor de x: %d\n", x);
  printf("Valor de y: %d\n", y);
}