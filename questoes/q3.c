#include <stdio.h>

int main(){

float celsius;

printf("entre com o valor de celsius :");
  scanf("%f", &celsius);

  float fa = (celsius * 9 / 5) + 32;
  
  printf("O valor em fahrenheit é : %f\n", fa);
  
  return 0;
}