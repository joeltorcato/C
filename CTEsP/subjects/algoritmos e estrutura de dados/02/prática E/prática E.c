#include <stdio.h>

int main () {
  int n [6] = {2401, 2405, 2410, 2413, 2420, 2422};
  int nprocurado = 2401;
  int contador = 0;

  for (int contador = 0; contador <= 5; contador++) {
    if(n[contador] == nprocurado) {
      printf("%d\n", contador);
      break;
    } else {
        printf("não existe\n");
    }
  }
  return 0;
}