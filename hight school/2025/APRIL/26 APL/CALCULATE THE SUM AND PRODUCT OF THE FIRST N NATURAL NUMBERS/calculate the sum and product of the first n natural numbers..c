#include <stdio.h>

int main() {
    int n, num, sum, product;
    printf("enter the value of n: ");
    scanf_s("%d", &num);

    for (sum = 0, n = product = 1; n <= num; n++) {
        sum = sum + n;
        product = product * n;
    }
    printf("sum = %d\nproduct= %d\n", sum, product);
}