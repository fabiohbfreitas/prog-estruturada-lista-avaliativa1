#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main(void) {
  setlocale(LC_ALL, "Portuguese");
  
  int a = 0;
  printf("Insira o valor para A: ");
  scanf("%d", &a);

  int b = 0;
  printf("Insira o valor para A: ");
  scanf("%d", &b);

  int c = 0;
  printf("Insira o valor para A: ");
  scanf("%d", &c);

  int d = 0;
  printf("Insira o valor para A: ");
  scanf("%d", &d);

  int result = (a*b) - (c*d);
  printf("O resultado é: %d\n", result);
  
  return EXIT_SUCCESS;
}

