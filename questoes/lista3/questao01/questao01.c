#include <stdio.h>

int main() {
int numero;

  printf("Entre com um numero inteiro: ");
  int deu_certo = scanf("%i", &numero);

if (deu_certo) {
  if (numero %2 == 0) {
    printf("O numero %i é par!\n", numero);
  } else {
    printf("O numero %i é impar!\n", numero);
  }
} else {
  printf("Numero inválido!\n");
}
  return 0;
}