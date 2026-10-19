#include <stdio.h>
#include <stdlib.h>

int main() {
  float media;
  float temperatura[7];

  for (int contador = 0; contador <= 6; contador++) {
    printf("\ninsira a %dº temperatura: ", contador + 1);
    scanf("%f", &temperatura[contador]);
  } 
}
