#include <stdio.h>

int main () {
  int n [6] = {2401, 2405, 2410, 2413, 2420, 2422};
  int nprocurado = 2405;
  int contador;

  for (contador = 0; contador <= 5; contador++) {
    if(n[contador] == nprocurado) 
      printf("%d\n", contador + 1);
  }
  printf("não existe\n");
}

// sem else
// 2 for loop