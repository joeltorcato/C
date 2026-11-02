#include <stdio.h>
#include <stdlib.h>

int maiorVinte(float numeros[], int quantidade)
{
  int contador = 0;

  for (int inicial = 0; inicial < quantidade; inicial++)
  {
    if (numeros[inicial] > 20)
    {
      contador = contador + 1;
    }
  }
  return contador;
}

int main(void)
{
  float numeros[5];

  for (int inicial = 0; inicial < 5; inicial++)
  {
    printf("\nInsira o valor número %d: \n", inicial + 1);
    scanf("%f", &numeros[inicial]);
  }

  int resultado = maiorVinte(numeros, 5);

  printf("Existe %d números maiores que 20\n\n", resultado);

  return 0;
}