#include <stdio.h>

int main() {
    int n1, n2;

    printf("type the first number: ");
    scanf("%d", &n1);
    printf("type the second number: ");
    scanf("%d", &n2);

    printf("the sum of the two numbers is: %d\n", n1 + n2);
    printf("the subtraction of the two numbers is: %d\n", n1 - n2);
    printf("the multiplication of the two numbers is: %d\n", n1 * n2);
    printf("the division of the two numbers is: %d\n", n1 / n2);
    printf("the rest of the division of the two numbers is: %d\n", n1 % n2);
}