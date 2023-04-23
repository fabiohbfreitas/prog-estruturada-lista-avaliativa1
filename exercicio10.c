#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
  setlocale(LC_ALL, "Portuguese");

  int sum = 0;
  for (int i = 0; i < 10; i += 1) {
    printf("Informe o numero %d: ", i + 1);
    int current = 0;
    scanf("%d", &current);
    sum += current;
  }
  float avg = sum / 10.0;
  printf("A média é: %.2f\n", avg);
  
  return EXIT_SUCCESS;
}