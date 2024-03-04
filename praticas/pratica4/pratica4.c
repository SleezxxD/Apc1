/*
5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
  */

#include <stdio.h>

int main() {

  float gigabytes = 1024^3;
  float quantidade_gb = 00;
  
  printf("entre com o valor em gigabytes: ");
  scanf("%f", &quantidade_gb);

  float valor_em_bytes = quantidade_gb * gigabytes;
  printf("O valor em bytes é %f\n", valor_em_bytes);
  
  return 0;
}