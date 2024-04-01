#include <stdio.h>

int main (){
  
   int numero1;
   int numero2;

  printf("entre com o primeiro número:");
  int deu_certo = scanf("%i", &numero1);

  printf("entre com o segundo numero:");
  int deu_certo2 = scanf("%i", &numero2);

  int sao_iguais = numero1 == numero2;
  printf("Os numeros são iguais? %i\n", sao_iguais);

  int sao_diferentes = numero1 != numero2;
 printf("Os numeros são diferentes? %i\n", sao_diferentes);

  int eh_maior = numero1 > numero2;
  printf("o primeiro numero é maior que o segundo? %i\n", eh_maior );

  int eh_menor = numero1 < numero2;
  printf("o primeiro numero é menor que o segundo? %i\n", eh_menor );

  int eh_maior_igual = numero1 >= numero2;
  printf("o primeiro numero é maior ou igual que o segundo? %i\n", eh_maior_igual );

  int eh_menor_igual = numero1 <= numero2;
  printf("o primeiro numero é menor ou igual que o segundo? %i\n", eh_maior_igual );
  
  return 0;
  
}