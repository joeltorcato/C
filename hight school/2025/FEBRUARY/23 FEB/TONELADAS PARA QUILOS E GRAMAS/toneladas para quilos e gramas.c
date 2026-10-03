#include <stdio.h>

int main() {
    float quilos = 1.0E3; // uma tonelada são 1000 quilos
    double gramas = 1.0e6; // uma tonelada são 1,000,000 gramas
    float n_toneladas;

    printf("how many tons did you buy: ");
    scanf("%f", &n_toneladas);
    printf("number of kilos = %f = %e\n", n_toneladas * quilos, n_toneladas * quilos);
    printf("number of grams = %f = %E\n", n_toneladas * gramas, n_toneladas * gramas);
}