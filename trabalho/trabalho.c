#include <stdio.h>

int main() {

int opcao;
int nome;
int ameaca;
int morte;

printf("\x1b[37m Você acorda atordoado em meio a uma floresta mórbida, quando de repente você vê uma figura estranha a sua frente.\n");
printf("Ele o cumprimenta, logo em seguida, se apresenta dizendo :\n");
printf("Olá, me chamo Sr. lobo, qual o seu nome?\x1b[0m\n");
printf("\n");
printf("\n");
printf("\x1b[37m O que você faz?\x1b[0m\n");
printf("\n");
printf("\n");
printf("1-Você fala seu verdadeiro nome para ele.\n");
printf("2-Dizer que não sabe.\n");
printf("3-Fugir.\n\n");
 
int leu_certo = scanf("%i", &opcao); 
   
switch (opcao){

  case 1: printf("\nDigite seu nome: ");
  scanf("%i", &nome);
  printf("\n\x1b[32mEle dá um sorriso e pede para acompanha-lo.\x1b[0m\n"); break;
  
  case 2: printf("\n\x1b[33mEle parece não acreditar, mas pede para acompanha-lo mesmo assim.\x1b[0m\n"); break;
  case 3: printf("\n\x1b[31mEle o persegue e o ameaça.\x1b[0m\n"); break;
  default : printf("\n\x1b[31mOpção Inválida\x1b[0m\n");
}
if(opcao == 3){
 ameaca = 1;
}
if(opcao >= 1 && opcao < 3){
printf("\nLogo após, você e o Sr. Lobo chegam em uma casa. Logo antes de entrar, o lobo diz as seguintes recomendações :\n");
printf("1 - Não ande pela casa sem permissão\n");
  printf("2 - O lobo não gosta de bagunça\n");
  printf("3 - O lobo não gosta de barulho\n");
} else {
printf("\nA cada escolha errada, Você recebe uma ameaça, ao totalizar 3 ameaças, o lobo vai te matar.\n");
printf("\nNúmero de ameaças: %i\n", ameaca);
}


  
return 0;
}