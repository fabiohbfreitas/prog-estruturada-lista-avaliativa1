#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main(void) {
  setlocale(LC_ALL, "Portuguese");

  float point_x = 0;
  printf("Informe o valor de X: ");
  scanf("%f", &point_x);

  float point_y = 0;
  printf("Informe o valor de Y: ");
  scanf("%f", &point_y);

  if (point_x > 0 && point_y > 0) {
    printf("O ponto está no quadrante Q1\n");
  } else if (point_x > 0 && point_y < 0) {
    printf("O ponto está no quadrante Q4\n");
  } else if (point_x < 0 && point_y > 0) {
    printf("O ponto está no quadrante Q2\n");
  } else if (point_x < 0 && point_y < 0) {
    printf("O ponto está no quadrante Q3\n");
  } else {
    printf("O ponto não está em nenhum quadrante\n");
  }

  return EXIT_SUCCESS;
}