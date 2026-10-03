#include <stdio.h>

int main() {
    char ch;

    printf("type a character: ");
    scanf("%c", &ch);
    printf("the character %c is %d in ASCII\n", ch, ch);
}