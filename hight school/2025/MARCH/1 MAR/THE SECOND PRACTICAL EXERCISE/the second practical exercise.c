#include <stdio.h>

int main () {
    long int seg, horas, minutos, segundos;

printf("type the number of seconds: ");
scanf("%d", &seg);

horas = seg / 3600;
seg = seg % 3600;
minutos = seg / 60;
segundos = seg % 60;

printf("the time is: %d hours, %d minutes and %d seconds\n", horas, minutos, segundos);
}