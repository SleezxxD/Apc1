/*Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>

int main() {

  int raio = 00;
  const float PI = 3.1416f;


  printf("Entre com o valor do raio:  \n");
 int deu_certo = scanf("%i", &raio );

   float perimetro = raio * PI; 
  
  printf("O valor do perimetro é: %.2f\n", perimetro);
  
  return 0;
}