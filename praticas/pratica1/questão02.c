/*
2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
*/

#include <stdio.h>

int main() {
  
float base;
float altura;
float area;
  
  base = 2.0f; // "2.0f" isso é float, "2.0" isso é double 
  altura = 3.0f;
  area = base * altura / 2; 

  
  printf("A área do triangulo é %f\n", area);
  
  return 0;
}