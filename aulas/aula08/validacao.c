#include <stdio.h>

int main(){

int numero;
int numero_valido = 0;

while (numero_valido == 0){
  printf("Entre com um numero entre 1 e 10: ");
  int leu_certo = scanf("%i", &numero);

  numero_valido = leu_certo && numero >=1 && numero <=10;

  if (numero_valido == 0){
    printf("Algo de errado nao esta certo!\n");
    getchar(); //limpar o buffer
  }
}
  
printf("Faz certo que da certo!\n");

do{
  printf("Entre com um numero entre 1 e 10: ");
  int leu_certo = scanf("%i", &numero);

  numero_valido = leu_certo && numero >=1 && numero <=10;

  if (numero_valido == 0){
    printf("Algo de errado nao esta certo!\n");
    getchar();
  }
}while(numero_valido == 0)
  
  return 0;
}