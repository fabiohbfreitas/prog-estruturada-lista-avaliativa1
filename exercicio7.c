#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <limits.h>


int main(void) {
  setlocale(LC_ALL, "Portuguese");

  int readed_value = INT_MIN;
  do {
    if (readed_value < 0 && readed_value != INT_MIN) {
      printf("[ERRO] O numero não pode ser negativo ou nulo.\n\n");
    }
    printf("Informe o número desejado: ");
    scanf("%d", &readed_value);
  } while (readed_value < 0);

  int previous_previous = 0;
  int previous = 1;
  int current = 1;
  for (int i = 0; i <= readed_value; i += 1) {
    if (i == 0 || i == 1) {
      printf("%d ",i);
    } else {
      current = previous + previous_previous;
      previous_previous = previous;
      previous = current;
      printf("%d ", current);
    }
  }
  printf("\n");
  
  return EXIT_SUCCESS;
}