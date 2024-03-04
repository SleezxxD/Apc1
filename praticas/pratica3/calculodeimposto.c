/*
4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
  */

#include <stdio.h>

int main() {
  
const float ICMS = 0.17f;
const float COFINS = 7.6/100;
const float PASEP = 1.65/100;
float preco_inicial = 00;

  printf( "entre com o valor inicial do produto: ");
  scanf("%f", &preco_inicial);

  float valor_imposto_icms = preco_inicial * ICMS;
  float valor_imposto_cofins = preco_inicial * COFINS;
  float valor_imposto_pasep = preco_inicial * PASEP;

float preco_final = (1 + ICMS + COFINS + PASEP) * preco_inicial;

  printf("O preço inicial é %f\n", preco_inicial);
  printf("O preço final do produto é %f\n" , preco_final);
  printf("Imposto ICMS é %f\n" , valor_imposto_icms);
  printf("Imposto COFINS é %f\n" , valor_imposto_cofins);
  printf("Imposto PASEP é %f\n" , valor_imposto_pasep);
  
  return 0;
}