#include <stdio.h>

int main() { 
float raio = 00;
 float pi = 3.14;

printf("entre com o valor do raio da pizza: ");
  scanf("%f", &raio);

  float area_da_pizza = pi*raio*raio;

  printf("A área da pizza é %f\n", area_da_pizza);
  
 return 0;
}