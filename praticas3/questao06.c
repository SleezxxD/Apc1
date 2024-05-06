//6. Faça um programa em C que liste todos os múltiplos de 3, entre 1 e 100.

#include <stdio.h>

int main(){
  
int numero;

printf("Entre com um numero entre 1 e 100:");  
int leu_certo = scanf("%i", &numero);

if(leu_certo && numero > 0 && numero < 101){
  printf("De 0 a 100, os multiplos de %i entre 1 e 100 são:\n", numero);
  for ( int i = 1; i < 101; i++){
    if(i % numero == 0){
    printf("%i, ", i);
    }
  }
printf("\n");
} else {
  printf("Numero inválido. Tente novamente.\n");
}
  
return 0;  
}