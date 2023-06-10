#include <stdio.h>

int main() {
  int n, contador, fatorial; 
  
  printf("\nDigite um numero para calcular o fatorial: ");
  scanf("%d", &n);
  
  fatorial = 1;
  contador = 2;
  
  while (contador <= n) {
    fatorial = fatorial * contador;
    contador = contador + 1;
  }
  printf("O valor de %d!: %d\n", n, fatorial);
  
  return 0;
}
