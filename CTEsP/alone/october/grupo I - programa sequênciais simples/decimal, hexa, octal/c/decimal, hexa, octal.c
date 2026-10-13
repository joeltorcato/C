#include <stdio.h>

int main () {
  int decimal;

  printf("escreve um número em decimal: ");
  scanf("%d", &decimal);
  
  printf("hexa: %X\n", decimal);
  printf("octal: %o\n", decimal);

  return 0;
}