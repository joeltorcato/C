#include <stdio.h>

int main() {
    int x,y, tmp;

    printf("enter the first number: ");
    scanf("%d", &x);

    printf("enter the second number: ");
    scanf("%d", &y);

    if (x > y){
        tmp = x;
        x = y;
        y = tmp;
    }
    printf("%d , %d\n", x, y);
}