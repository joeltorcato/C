#include <stdio.h>
#include <stdlib.h>

int valoresNegativos(int valores[3][4], int linhas, int colunas)
/* With a one-dimensional array I don't need to specify the line, but with a two-dimensional
I need to specify or both (lines and columns) or I just need to specify the colomns */
{
  int contador = 0;

  for (int linicial = 0; linicial < linhas; linicial++)
  {
    for (int cinicial = 0; cinicial < colunas; cinicial++)
    {
      if (valores[linicial][cinicial] < 0)
      {
        contador = contador + 1;
      }
    }
  }
  return contador;
}

int main()
{
  int valores[3][4];
  int linhas = 3;
  int colunas = 4;

  for (int lincial = 0; lincial < linhas; lincial++)
  {
    for (int cinicial = 0; cinicial < colunas; cinicial++)
    {
      printf("Insira o valor para a linha %d e coluna %d: ", lincial, cinicial);
      scanf("%d", &valores[lincial][cinicial]);
    }
  }

  int resultado = valoresNegativos(valores, 3, 4);

  printf("\nExistem %d valores negativos.\n\n", resultado);
}