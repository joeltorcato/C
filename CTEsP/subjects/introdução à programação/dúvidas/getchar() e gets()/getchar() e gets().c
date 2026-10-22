#include <stdio.h>
#include <stdlib.h>

int main () {
  char letra;

  printf("Escreve: ");
  letra = getchar();

  printf("Tu escreveste: %c\n", letra); // Apenas o primeiro caractre

  return 0;

  // gets() é inseguro e antigo
}