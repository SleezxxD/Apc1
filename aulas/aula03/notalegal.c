  #include<stdio.h>

int main() {
  
printf("---------------------------------------------\n");
  printf("               NOTA LEGAL                  \n");
  printf("---------------------------------------------\n");
  printf("Item                    Qtd        Valor\n");
  printf("X-Tudo                  1          R$10,00\n");

  char item [31] = "X-tudo";
  int qtde = 1;
  float preco = 15.00f;

  printf( "%s %18i %14.2f\n", item, qtde, preco);

  
  return 0;
}