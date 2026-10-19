#include <stdio.h>
#include <stdlib.h>

int main() {
  #define PI 3.14159265358979323846
  float raio = 10, perímetro;

  perímetro = 2 * PI * raio; 

  printf("o perímetro da circunferência é de %.2f\n", perímetro);
}

// pedir ao utilizador