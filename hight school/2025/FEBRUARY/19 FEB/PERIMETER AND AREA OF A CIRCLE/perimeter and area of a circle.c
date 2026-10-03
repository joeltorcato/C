#include <stdio.h>

int main() {
    float raio, perimetro;
    double area;
    printf("what is the radius: ");
    scanf("%f", &raio);
    perimetro = 2 * 3.14159 * raio;
    area = 3.14159 * raio * raio;
    printf("the perimeter is %f and the area is %f\n", perimetro, area);
}