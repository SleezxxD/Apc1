#include <stdio.h>

int main(){
int quantidade;

  printf("Entre com a quntidade de numeros a serem lidos: ");
  int leu_certo = scanf("%i", &quantidade);

  if (leu_certo && quantidade > 0) {
    int soma = 0;
    for(int i = 1; i <= quantidade; i++){
      int numero;
      printf("Entre com o %io numero: ", i);
      leu_certo = scanf("%i", &numero);
      if(leu_certo) {
        soma = soma + numero;
      }else {
        printf("Numero ivalido. Tente novamente\n");
        getchar(); //limpar o \n
        i--;
      }
    }
    float media = soma * 1.0f / quantidade;
    printf("A media aritmetica é %.1f\n", media);
  } else {
    printf("Quantidade invalida. Tente novamente");
  }
return 0;
  
}