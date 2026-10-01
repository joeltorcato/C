#include <stdio.h>

int main() {
    char estadoCivil;
    puts("WHAT IS THE MARITAL STATUS: ");
    scanf(" %C" , &estadoCivil);

    switch (estadoCivil)
    {
        case 'm' :
        case 'M': printf("MARRIED\n");
            break;
        case 's':
        case 'S': printf("SINGLE\n");
            break;
        case 'd':
        case 'D': printf("DIVORCED\n");
            break;
        case 'w':
        case 'W': printf("WIDOWED\n");
            break;
        default: printf("INVALID\n");
    }
}
