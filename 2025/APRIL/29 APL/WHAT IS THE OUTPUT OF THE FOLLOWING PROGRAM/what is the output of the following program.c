#include <stdio.h>

int main () {
    int i;
    for (i = 1 ; i <= 100 ; i = i + 1) {
        if (i == 30)
            break;
        else
            printf("%d\n", 2 * i);
        printf("END OF THE LOOP\n");
    }
}