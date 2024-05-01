#include <stdio.h>

int main() {

int opcao;
  
printf("Você acorda atordoado em meio a uma floresta mórbida, quando de repente você vê uma figura estranha a sua frente.\n");
printf("Ele o cumprimenta, logo em seguida, se apresenta dizendo :\n");
printf("Olá, me chamo Sr. lobo, qual o seu nome?\n");
printf("\n");
printf("\n");
printf("O que você faz?\n");
printf("\n");
printf("\n");
printf("1-Você fala seu verdadeiro nome para ele.\n");
printf("2-Dizer que não sabe.\n");
printf("3-Fugir.");
 
int leu_certo = scanf("%i", &opcao); 
  
switch (opcao){

  case 1: printf("Ele dá um sorriso e pede para acompanha-lo.\n"); break;
  case 2: printf("Ele parece não acreditar, mas pede para acompanha-lo mesmo assim.\n"); break;
  case 3: printf("Ele o persegue e o ameaça.\n"); break;
  default : printf("Opção Inválida\n");
}   
  
return 0;
}