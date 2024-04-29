#include <stdio.h>

int main(){

int avaliacao;
  
printf("Entre com a avaliação do motorista");
  int leu_certo = scanf(" %i", &avaliacao);
/*
  if(avaliacao == 1) {
    printf("O motorista ganhou *\n");
  } else if (avaliacao == 2) {
    printf("O motorista ganhou **\n");
  } else if (avaliacao == 3) {
    printf("O motorista ganhou ***\n");
  } else if (avaliacao == 4) {
    printf("O motorista ganhou ****\n");
  } else if (avaliacao == 5) {
    printf("O motorista ganhou *****\n");
  } else {
    printf("Avaliação inválida. Tente novamente!\n");
  }
 */

  switch(avaliacao){
    case 1: printf("O motorista ganhou *\n");
    case 2: printf("O motorista ganhou **\n");
    case 3: printf("O motorista ganhou ***\n");
    case 4: printf("O motorista ganhou ****\n");
    case 5: printf("O motorista ganhou *****\n");
  }
  
  return 0;
}