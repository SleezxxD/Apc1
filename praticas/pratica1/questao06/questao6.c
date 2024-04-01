//Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°. se o valor do angulo for maior que 45, não realizará o calcuro, porém se for menor ou igual a 45, ira fazer o calculo e dar o resultado

#include <stdio.h>
#include <math.h>

  int main(){
    
  float dist;
  float ang;
  float altura = dist * ang;
  const float PI = 3.14f;
    
printf("Entre com o valor do angulo: ");
   scanf("%f", &ang);
    
  float valor_ang = sin(ang * (PI / 180));
  
 printf("O valor da altura é : %.2f\n", altura);
    
  return 0;
}