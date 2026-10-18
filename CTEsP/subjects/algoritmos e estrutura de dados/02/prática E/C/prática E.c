#include <stdio.h>

int main () {
  int n [6] = {2401, 2405, 2410, 2413, 2420, 2422};
  int nprocurado = 242;
  int contador;

  for (contador = 0; contador <= 5; contador++) {
    if(n[contador] == nprocurado) {
      printf("%d\n", contador + 1);
      return 0; // termina imediatamente a função main()
    }
  }
    printf("não existe\n");
  } 