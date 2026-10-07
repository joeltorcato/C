#include <stdio.h>

int main () {

  for (int numerotabuada = 1; numerotabuada <= 9; numerotabuada++) {
    for (int multiplicador = 1; multiplicador <= 10; multiplicador++)
    {
      printf("%d x %d = %2d \n", numerotabuada, multiplicador, numerotabuada * multiplicador);
    }
     printf("\n");
  }
}