#include <stdio.h>
#include <string.h>

int main()
{
  char resposta[50]; // 49 caracteres úteis
  int a = 0;
  int e = 0;
  int i = 0;
  int o = 0;
  int u = 0;

  printf("\nInsira uma frase: ");
  fflush(stdin);
  fgets(resposta, 50, stdin);

  for (int inicial = 0; inicial < strlen(resposta); inicial++)
  {
    if (resposta[inicial] == 'a' || resposta[inicial] == 'A')
    {
      a = a + 1;
    }
    else if (resposta[inicial] == 'e' || resposta[inicial] == 'E')
    {
      e = e + 1;
    }
    else if (resposta[inicial] == 'i' || resposta[inicial] == 'I')
    {
      i = i + 1;
    }
    else if (resposta[inicial] == 'o' || resposta[inicial] == 'O')
    {
      o = o + 1;
    }
    else if (resposta[inicial] == 'u' || resposta[inicial] == 'U')
    {
      u = u + 1;
    }
  }

  printf("\nOcorrências da Vogal a: %d\n", a);
  printf("Ocorrências da Vogal e: %d\n", e);
  printf("Ocorrências da Vogal i: %d\n", i);
  printf("Ocorrências da Vogal o: %d\n", o);
  printf("Ocorrências da Vogal u: %d\n\n", u);

  return 0;
}