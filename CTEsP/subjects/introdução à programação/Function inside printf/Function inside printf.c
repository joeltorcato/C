#include <stdio.h>

int dobro(int number)
{
  return number * 2;
}

int main(void)
{
  printf("The double is %d\n", dobro(5));
}

// I can call a function inside printf if the function returns a value
