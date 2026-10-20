#include <stdio.h>

int main() {
  float temperatura;
  int quantidadeTemperaturas = 0;
  float somaTemperaturas = 0;
  float somaRestoTemperaturas = 0;
  float media;
  float mediaTotal;

  for (int contador = 0; contador < 7; contador = contador + 1) { 
    printf("\nInsira a %dº temperatura: ", contador + 1);
    scanf("%f", &temperatura); 

    if (temperatura >= 18 && temperatura <= 28) {
      somaTemperaturas = somaTemperaturas + temperatura; 
      quantidadeTemperaturas = quantidadeTemperaturas + 1;
    } else {
      somaRestoTemperaturas = somaRestoTemperaturas + temperatura;
    }
  }

  // Primeira média
  if (quantidadeTemperaturas > 0) {
    media = somaTemperaturas / quantidadeTemperaturas;
    printf("\nA média das temperaturas entre os valores 18 e 28 são de %.2f\n", media);
  } else {
    printf("\nNão existe temperaturas entre os valores 18 e 28\n");
  }

  // Segunda média
    mediaTotal = (somaTemperaturas + somaRestoTemperaturas) / 7;
    printf("\nA média de todas as temperaturas é de %.2f\n\n", mediaTotal);
}