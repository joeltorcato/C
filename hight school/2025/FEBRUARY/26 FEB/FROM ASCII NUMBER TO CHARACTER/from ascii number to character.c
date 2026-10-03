#include <stdio.h>

int main() {
    int num;

        printf("writes an ASCII number between 0 and 255: ");
        scanf("%d", &num);
        printf("the number %d in ASCII is the character %c\n", num, num);
}