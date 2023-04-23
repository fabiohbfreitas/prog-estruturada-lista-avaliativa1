#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {
  float current = 0;
  float biggest = (float)LONG_MIN;
  float smallest = (float)LONG_MAX;

  while (current >= 0) {
    printf("Informe o próximo numero: ");
    scanf("%f", &current);
    if (current < 0) {
      break;
    }
    biggest = fmaxf(biggest, current);
    smallest = fminf(smallest, current);
  }
  printf("Máximo: %.2f\nMínimo: %.2f\n", biggest, smallest);
  
  return EXIT_SUCCESS;
}