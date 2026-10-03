#include <stdio.h>

int main() {
    int x, y;

    printf("enter the first number: ");
    scanf_s("%d", &x);
    printf("enter the second number: ");
    scanf_s("%d", &y);

    printf("the result of %d == %d : %d\n", x, y, x==y);
    printf("the result of %d != %d : %d\n", x, y, x!=y);
    printf("the result of %d > %d : %d\n", x, y, x>y);
    printf("the result of %d < %d : %d\n", x, y, x<y);
    printf("the result of %d >= %d : %d\n", x, y, x>=y);
    printf("the result of %d <= %d : %d\n", x, y, x<=y);
}