#include <stdio.h>

int main() {
    char estadoCivil;
    puts("WHAT IS THE MARITAL STATUS: ");
    estadoCivil = getchar();

    if (estadoCivil == 'S' || estadoCivil == 's')
        printf("SINGLE");
     else
         if (estadoCivil == 'M' || estadoCivil == 'm')
        printf("MARRIED");
     else
        if (estadoCivil == 'D' || estadoCivil == 'd')
        puts("DIVORCED");
     else
         if (estadoCivil == 'W' || estadoCivil == 'w')
        puts("WIDOWED");
     else
        puts("INVALID");
        printf("\n");
}