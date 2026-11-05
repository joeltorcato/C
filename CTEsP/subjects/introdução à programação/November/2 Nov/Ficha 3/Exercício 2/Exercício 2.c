#include <stdio.h>

int maiorVinte(float numeros[], int quantidade)
{
  int contador = 0;

  for (int inicial = 0; inicial < quantidade; inicial++) // strlen is for strings
  {
    if (numeros[inicial] > 20.0f)
    {
      contador = contador + 1;
    }
  }
  return contador;
}

int main(void)
{
  float numeros[5];
  int final = 5; // Use a variable instead a hardcoded.

  for (int inicial = 0; inicial < final; inicial++)
  {
    printf("\nInsira o valor número %d: ", inicial + 1);
    scanf("%f", &numeros[inicial]);
  }

  int resultado = maiorVinte(numeros, final); // Connects maiorVinte() and main()

  printf("\nExiste %d números maiores que 20\n\n", resultado);

  return 0;
}