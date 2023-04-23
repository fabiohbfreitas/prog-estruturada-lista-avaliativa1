#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main(void) {
  setlocale(LC_ALL, "Portuguese");

  int readed_value = 0;
  printf("Informe o valor desejado: ");
  scanf("%d", &readed_value);

  printf("Os divisores são: ");
  for (int start = 1; start <= readed_value; start += 1) {
    if (readed_value % start == 0) {
      printf("%d ", start);
    }
  }
  printf("\n");
  
  return EXIT_SUCCESS;
}