#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char palavras[100];
  char palavrasUnicas[100];

  printf("Insira uma frase: ");
  fgets(palavras, 100, stdin);

  for (int inicial = 0; inicial < strlen(palavras); inicial++)
  {
    for (int i = 0; i < strlen(palavras); i++)
    {
      if (palavras[inicial] != palavrasUnicas[i])
      {
        palavras[inicial] = palavrasUnicas[i];
      }
      i++;

      printf("%s", palavras);
      printf("%s", palavrasUnicas);
    }
  }
}