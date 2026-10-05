#include <stdio.h>

int main () {
  int numerotabuada, multiplicador, resultado;

  numerotabuada = 1;
  multiplicador = 1;

  // outer loop
  for (resultado = numerotabuada; resultado <= (numerotabuada * 10); resultado = numerotabuada * multiplicador) { //resultado += numerotabuada
    printf("%d x %d = %d\n", numerotabuada, multiplicador, resultado);
    multiplicador = multiplicador + 1; // multiplicador++

    continue;

    // inner loop
        for (numerotabuada = numerotabuada + +1; resultado <= (numerotabuada * 10); resultado = numerotabuada * multiplicador) { //resultado += numerotabuada
    printf("\n%d x %d = %d\n", numerotabuada, multiplicador, resultado);
    multiplicador = multiplicador + 1; // multiplicador++
    }
  }
  return 0;
}



// fazer o ciclo continuar.