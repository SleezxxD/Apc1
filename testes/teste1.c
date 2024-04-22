//Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).
#include <stdio.h>
#include <math.h>

int main(){

  float calculardistancia = sqrt(pow(10 - 5, 2) + pow(2 - 5, 2));

  printf("O valor da dinstancia é : %.2f\n", calculardistancia);

  return 0;
}