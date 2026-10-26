#include <stdio.h>
#include <stdlib.h>

int main () {
  int numeroEmpregado, horasTrabalhadas, horasExtra;
  double valorHora, valorNormal, valorExtra, salarioLiquido, salarioBruto, IRS, segurancaSocial;

  printf("Diga o seu número de empregado: ");
  scanf("%d", &numeroEmpregado);

  printf("Diga a quantidade de horas que trabalhou: ");
  scanf("%d", &horasTrabalhadas);

  printf("Diga o seu valor por hora: ");
  scanf("%lf", &valorHora);

  if (horasTrabalhadas > 35) {
    horasExtra = horasTrabalhadas - 35; 
    valorNormal = 35 * valorHora;
    valorExtra = (horasExtra * 1.5) * valorHora; // Casa decimal é . não ,
    salarioBruto = valorNormal + valorExtra;
  } else {
    salarioBruto = valorHora * horasTrabalhadas;
  }

  if (salarioBruto >= 1000) {
    IRS = salarioBruto * 0.20; // 20% convertido para casa decimal 0.20
    segurancaSocial = salarioBruto * 0.11;
    salarioLiquido = salarioBruto - IRS - segurancaSocial;
  } else if (salarioBruto >= 600 && salarioBruto < 1000) {
    IRS = salarioBruto * 0.15;
    segurancaSocial = salarioBruto * 0.11;
    salarioLiquido = salarioBruto - IRS - segurancaSocial;
  } else {
    IRS = salarioBruto * 0.10;
    segurancaSocial = salarioBruto * 0.11;
    salarioLiquido = salarioBruto - IRS - segurancaSocial;
  }

  printf("O salário líquido é de: %.2lf€\n", salarioLiquido);
}

// Use functions