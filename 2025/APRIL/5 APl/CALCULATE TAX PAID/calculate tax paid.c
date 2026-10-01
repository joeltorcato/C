#include <stdio.h>

int main () {
    float salary , tax;
    char sex;

    printf ("WHAT IS THE SALARY: ");
    scanf_s ("%f" , &salary);

    printf ("WHAT IS THE SEX: ");
    scanf (" %c" , &sex);

    switch ( sex ) {
        case 'M':
        case 'm':
            tax = 0.15;
            break;
        case 'F':
        case 'f':
            tax = 0.10;
            break;
        default:
            printf ("INVALID SEX\n");
    }
        printf ("the tax is %.2f\n" , salary * tax);
}