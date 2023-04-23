#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");

  printf("Soma dos naturais menores que 1000 e divisiveis por 5 e 3: ");
  int acumulator = 0;

  for (int i = 0; i < 1000; i += 1) {
    if (i % 3 == 0 || i % 5 == 0) {
      // printf("\n%d\n", i);
      acumulator += i;
    }
  }

  printf("%d\n", acumulator);
  
}