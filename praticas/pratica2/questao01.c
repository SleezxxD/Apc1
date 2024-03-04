/*
1. Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10
  */

#include <stdio.h> 

int main() {

  float a1 = 0.0f;
  float a2 = 0.0f;

  printf("entre com o valor de a1:" );
  scanf("%f", &a1);

  printf("entre com o valor de a2:" );
  scanf("%f", &a2);

  float media_final = (0.4 * a1) + (0.6 * a2);

  printf( "A média final é %f\n" , media_final);
  
  return 0;
}
