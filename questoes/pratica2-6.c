//6. Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).

#include <stdio.h>

int main(){

  float valor_compra;
  float ano_fab;
  float ano_dep;

  printf("entre com o valor da compra: ");
  scanf("%f", &valor_compra);

  printf("entre com o ano de fabricação do veiculo: ");
  scanf("%f", &ano_fab);

  printf("entre com o ano de depreciação: ");
  scanf("%f", &ano_dep);
  
  float valor_total = (ano_dep - ano_fab) * 0.01 * valor_compra;

  printf("O valor da depreciação é : %.2f\n", valor_total);
  
  return 0;
}