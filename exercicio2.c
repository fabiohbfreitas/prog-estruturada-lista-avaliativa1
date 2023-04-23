#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main(void) {
  setlocale(LC_ALL, "Portuguese");

  float p1_x = 0.0;
  printf("Insira o valor de x para o ponto 1: ");
  scanf("%f", &p1_x);

  float p1_y = 0.0;
  printf("Insira o valor de y para o ponto 1: ");
  scanf("%f", &p1_y);

  float p2_x = 0.0;
  printf("Insira o valor de x para o ponto 2: ");
  scanf("%f", &p2_x);

  float p2_y = 0.0;
  printf("Insira o valor de y para o ponto 2: ");
  scanf("%f", &p2_y);

  const float distance = sqrtf(powf(p2_x - p1_x, 2) + powf(p2_y - p1_y, 2));
  printf("A distância é: %.4f\n", distance);

  return EXIT_SUCCESS;
}