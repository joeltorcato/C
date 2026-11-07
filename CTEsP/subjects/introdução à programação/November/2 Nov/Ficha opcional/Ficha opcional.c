#include <stdio.h>
#include <string.h>

#define LIMITE 150 // DRY

int main()
{
  char frase[LIMITE];
  char unicas[LIMITE][LIMITE]; // Two-dimensional array
  int ordem[LIMITE];
  int quantidadeUnicas = 0;
  int quantidadePalavras = 0;

  printf("Insira uma frase: ");

  if (fgets(frase, sizeof frase, stdin) == NULL) // Quetions - That mean if the user don't put any word the program done?
  {                                              // What mena sizeof
    return 1;
  }

  size_t comprimento = strcspn(frase, "\n"); // What mean size_t and strcspn

  if (frase[comprimento] == '\0')
  {
    printf("Introduza até 98 bytes e termine com Enter.\n");
    return 1;
  }

  frase[comprimento = '\0'];

  for (int i = 0; frase[i] != '\0'; i++)
  {
    if (frase[i] == ' ' && (i == 0 || frase[i + 1] == ' ' || frase[i + 1] == '\0'))
    {
      printf("Use apenas um espaço entre palavras.\n");
      return 1;
    }
  }

  char *palavra = strtok(frase, " ");

  while (palavra != NULL)
  {
    int indice = -1;

    for (int i = 0; i < quantidadeUnicas; i++)
    {
      if (strcmp(unicas[i], palavra) == 0)
      {
        indice = i;
        break;
      }
    }

    if (indice == -1)
    {
      strcpy(unicas[quantidadeUnicas], palavra);
      indice = quantidadeUnicas;
      quantidadeUnicas++;
    }

    ordem[quantidadePalavras] = indice;
    quantidadePalavras++;

    palavra = strtok(NULL, " ");
  }

  printf("\nPalavras únicas:\n");

  for (int i = 0; i < quantidadeUnicas; i++)
  {
    printf("%d: %s\n", i, unicas[i]);
  }

  printf("\nIndices guardados:");

  for (int i = 0; i < quantidadePalavras; i++)
  {
    printf(" %d", ordem[i]);
  }

  printf("\n");

  memset(frase, 0, sizeof frase);

  printf("\nString base destruída: \"%s\"\n", frase);

  for (int i = 0; i < quantidadePalavras; i++)
  {
    if (i > 0)
    {
      strcat(frase, " ");
    }
  }
  printf("\nFrase resconstruída: %s\n", frase);

  return 0;
}