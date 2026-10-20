#include <stdio.h>
#include <stdlib.h>

int main() {
  float temperatura; // perguntar o porquê
  float somaTemperaturas = 0;
  float somaRestoTemperaturas = 0;
  float media;
  int quantidadeTemperaturas = 0;
  float mediaTotal;

  for (int contador = 0; contador < 7; contador = contador + 1) { // diferença de <= 6 e < 7
    printf("\nInsira a %dº temperatura: ", contador + 1);
    scanf("%f", &temperatura); // perguntar o porquê

    if (temperatura >= 18 && temperatura <= 28) {
      somaTemperaturas = somaTemperaturas + temperatura; // todas as temperaturas é igual ao valor de todas as temperaturas neste momento, mais a próxima temperatura (que estiver dentro das regras do if)
      quantidadeTemperaturas = quantidadeTemperaturas + 1; // igual ao contador
    } else {
      somaRestoTemperaturas = somaRestoTemperaturas + temperatura;

    }
    
  }
  // Primeira média
  if (quantidadeTemperaturas > 0) {
    media = somaTemperaturas / quantidadeTemperaturas;
  printf("\nA média das temperaturas entre os valores 18 e 28 são de %2.f\n", media);
  } else {
    printf("\nNão existe temperaturas entre os valores 18 e 28");
  }

  // Segunda média
  if (quantidadeTemperaturas > 0) {
    mediaTotal = somaTemperaturas + somaRestoTemperaturas / 7;
    printf("A média de todas as temperaturas é de %.2f", mediaTotal);
    }
    return 0;
}