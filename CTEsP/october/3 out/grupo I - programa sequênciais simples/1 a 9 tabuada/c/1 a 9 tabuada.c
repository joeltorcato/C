#include <stdio.h>

int main () {
  int numerotabuada = 1;

  for (int i = 1; i <= 9; i++) {
    for (int multiplicador = 1; multiplicador <= 10; multiplicador++)
    {
      printf("%d x %d = %3d \n",numerotabuada, multiplicador, i * multiplicador);
    }
     numerotabuada = numerotabuada + 1;
     printf("\n");
  }
}

// organizar melhor o exercício.