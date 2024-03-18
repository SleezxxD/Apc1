/*
  1. Faça um programa em C que leia três números reais e imprima a média aritmética destes números
*/


#include <stdio.h>

int main(){

  int numero_1 = 00;
  int numero_2 = 00;
  int numero_3 = 00;

  printf("Entre com o valor do primeiro numero: ");
  scanf("%i", &numero_1);

printf("Entre com o valor do segundo numero: ");
  scanf("%i", &numero_2);

  printf("Entre com o valor do terceiro numero: ");
  scanf("%i", &numero_3);

  int soma_dos_numeros = numero_1 + numero_2 + numero_3;
  
  float media_arit = soma_dos_numeros/3;

  printf("O valor da media aritmetica é %.2f\n", media_arit);
  
  return 0;
}