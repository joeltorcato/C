#include <stdio.h>
#include <stdlib.h>

int main() {
  float media;
  float temperatura[7];

  for (int contador = 0; contador < 7; contador++) { // diferença de <= 6 e < 7
    printf("\ninsira a %dº temperatura: ", contador + 1);
    scanf("%f", &temperatura[contador]);

    if (temperatura < 18 || temperatura > 28) {
      media = temperatura[contador] / contador;
      printf("%f", media);
    }
  } 
}
