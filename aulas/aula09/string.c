#include <stdio.h>
#include <string.h>


int main() { // 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0
             //   R A U L   F R E I T A S \0
  char nome[20];

  printf("Entre com seu nome: ");
  int deu_certo = scanf("%[^\n]s", nome); // ou gets

  printf("Olá %s!\n", nome);

  char mensagem[30];
  strcpy(mensagem, "Olá");
  printf("%s\n", mensagem);
  strcat(mensagem, " Mundo!");
  printf("%s\n", mensagem);
  int tamanho = strlen(mensagem);
  printf("O tamanho da string é %i\n", tamanho);
  printf("As strings nome e mensagem são iguais? %i\n", strcmp(nome, mensagem));
  
return 0;
}