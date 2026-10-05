#include <stdio.h>

int main () {
  int numerotabuada, multiplicador, resultado;

  numerotabuada = 1;
  multiplicador = 1;

  // ciclo
  for (resultado = numerotabuada; resultado <= (numerotabuada * 10); resultado = numerotabuada * multiplicador) { //resultado += numerotabuada
    printf("%d x %d = %d\n", numerotabuada, multiplicador, resultado);
    multiplicador = multiplicador + 1; // multiplicador++
      for (resultado = numerotabuada; resultado <= (numerotabuada * 10); resultado = numerotabuada * multiplicador) {
        printf("%d x %d = %d\n", numerotabuada, multiplicador, resultado);
        numerotabuada = numerotabuada + 1;
        multiplicador = multiplicador + 1; // multiplicador++
    }
    return 0;
  }
  return 0;
}


// fazer o ciclo continuar.