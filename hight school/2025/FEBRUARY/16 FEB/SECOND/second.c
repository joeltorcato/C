#include <stdio.h>

int main() {
    short int idade; // ou short int
    int montante;
    long int n_conta; // ou long n_conta

    printf("what is the age: "); scanf("%hd", &idade);
    printf("what is the amount: "); scanf("%d", &montante);
    printf("what is the account number: "); scanf("%ld", &n_conta);

    printf("a person from %hd years old has %d$00 euros in the account %ld\n", idade, montante, n_conta);
}