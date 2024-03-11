/*
  Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.
  */

#include <stdio.h> 

int main (){

float valor_hora_trabalhada = 150.f;
int total_horas_trabalhadas = 200;
float salario_bruto = valor_hora_trabalhada * total_horas_trabalhadas;

  
const float IR = 0.25f;
  const float INSS = 0.11f;

  float valor_ir = salario_bruto * IR;
  float valor_inss = salario_bruto * INSS;

  float salario_liquido = salario_bruto - valor_ir - valor_inss;
  
printf("\x1b[32m--------------------------------\n");
  printf("           CONTRA CHEQUE        \n");
  printf("--------------------------------\x1b[0m\n");
  printf("\x1b[33mSalario bruto :  R$ %11.2f\x1b[0m\n", salario_bruto);
  printf("\x1b[31mValor IR :      R$ %15.2f\x1b[0m\n", valor_ir);
  printf("\x1b[31mValor INSS :      R$ %13.2f\x1b[0m\n", valor_inss);
  printf("\x1b[32mSalario liquido : R$ %9.2f\x1b[0m\n", salario_liquido);
  printf("\x1b--------------------------------\x1b[0m\n");
  
  return 0;
}