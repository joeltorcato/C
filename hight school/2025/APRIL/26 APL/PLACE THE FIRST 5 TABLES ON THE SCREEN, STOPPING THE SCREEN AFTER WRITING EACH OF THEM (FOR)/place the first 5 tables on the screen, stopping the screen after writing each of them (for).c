#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%2d x %2d = %2d\n", i, j, i * j);

            if (j != 5) {
                printf("press enter to continue...");
                getchar();
            }
        }
    }
}