#include <stdio.h> 
#include <string.h>
#include <ctype.h>


int main(){ 

  char verbo[21];
  char pronomes[6][5]= {"EU", "TU", "ELE", "NOS", "VOS", "ELES"};
  char sufixos[6][5] = {"O", "AS", "A", "AMOS", "AIS", "AM"};
  
  printf("Entre com um verbo terminado em AR: ");
  int deu_certo = scanf("%s", verbo);

  int tamanho = strlen(verbo);

  for(int i=0; i<tamanho; i++){
    verbo[i] = toupper(verbo[i]);
  }
  
  int ultima_pos = tamanho - 1;
  int penultima_pos = ultima_pos - 1;

  if (verbo[penultima_pos] == 'A' && verbo[ultima_pos] == 'R') {
    char radical[21];
    strcpy(radical, verbo);
    radical[penultima_pos] = '\0';
    printf("Verbo %s no presente do indicativo\n", verbo);
    for(int i=0; i<6; i++){
      printf("%s %s%s\n", pronomes[i], radical, sufixos[i]);
    }
  } else {
    printf("O verbo %s nao termina em AR!\n", verbo);
  }
  return 0;
}