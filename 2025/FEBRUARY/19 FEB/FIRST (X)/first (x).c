#include <stdio.h>

int main() {
    short int x; // ou short int
    printf("the size in bytes of an integer = %d\n", sizeof(x));
    printf("the size in bytes of an char = %d\n", sizeof(char));
    printf("the size in bytes of an float = %d\n", sizeof(float));
    printf("the size in bytes of an double = %d\n", sizeof(double));
}