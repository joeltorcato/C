#include <stdio.h>

int main(){
    int e = 1;
    int i = 1;

    while (e <= 10){
        e++;
        while (i <= 5) {
            i++;
            printf("%d * %d = %d\n", e, i, e * i);
            }
    }
}