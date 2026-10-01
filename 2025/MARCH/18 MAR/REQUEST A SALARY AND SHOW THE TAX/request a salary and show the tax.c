#include <stdio.h>

int main() {
    float salary;

    printf("enter the salary: ");
    scanf("%f", &salary);

    if (salary <= 0)
        printf("invalid salary\n");
    else
        if (salary > 1000)
            printf("the tax is %.2f\n", salary * 0.10);
        else
            printf("the tax is %.2f\n", salary * 0.05);
}