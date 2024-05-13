/*Faça um programa em C que leia números até ler zero, e imprima o maior e o menor entre eles.*/

#include <stdio.h>

int main(){

int numero;
int maior = 0;
int menor = 0;
int numero_valido == 0;
  
while(!numero_valido){ // numero_valido == 0;
  printf("Entre com um numero (0 vai parar): ")
  int leu_certo = scanf("%i", &numero);
  getchar(); //limpar o \n

  numero_valido = leu_certo && numero !=0;
  if(numero == 0){
    break;
  }

  if (maior < numero){
    maior = numero
  }

  if ( menor > numero){
    menor = numero
  }
}  

printf("O maior numero é %i e o menor é %i\n", maior, menor);
  
  return 0;
}