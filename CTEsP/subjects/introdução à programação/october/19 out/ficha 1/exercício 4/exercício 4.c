#include <stdio.h>
#include <stdlib.h>

int main() {
  #define PI 3.14159265358979323846
  float raio = 10, perimetro;

  perimetro = 2 * PI * raio; 

  printf("O raio é de %.1f, logo o perímetro da circunferência é de %.1f\n", raio, perimetro);
}

// pedir ao utilizador