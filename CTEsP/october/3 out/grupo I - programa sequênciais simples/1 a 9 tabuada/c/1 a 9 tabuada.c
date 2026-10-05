#include <stdio.h>

int main () {
  int numerotabuada, multiplicador, resultado;

  numerotabuada = 2;
  multiplicador = 1;

  // ciclo
  for (resultado = numerotabuada; resultado <= (numerotabuada * 10); resultado = numerotabuada * multiplicador) { //resultado += numerotabuada
    printf("%d x %d = %d\n", numerotabuada, multiplicador, resultado);
    multiplicador = multiplicador + 1; // multiplicador++, testar atualizar no for.
  }
  return 0;
}

// fazer o ciclo continuar.