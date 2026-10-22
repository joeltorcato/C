#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

int main () {
  char digito = '1'; 
  char alfabeto = 'J';

  if(isdigit(digito)) { 
    printf("É um digito, %c\n", digito);
  } else {
    printf("Não é um digito\n");
  }

  if (isalpha(alfabeto)) {
    printf("É uma letra do alfabeto, %c\n", alfabeto);
  } else {
    printf("Não é uma letra do alfabeto\n");
  }

  // isdigit() e isalpha() apenas podem ser usados para char, não para string.
  // // Char guarda um único caracter.

  char verdadeiro = '1';
  char falso = 'A';

  int resultadoVerdadeiro = isdigit(verdadeiro);
  int resultadoFalso = isdigit(falso);

  printf("%d\n", resultadoFalso);
  printf("%d\n", resultadoVerdadeiro);

  if (isdigit(verdadeiro) == 2048) {
    printf("O valor %c. é um digito\n", verdadeiro);
  } else {
    printf("O valor %c, não é um digito\n", verdadeiro);
  }
}