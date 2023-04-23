#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

#define PI 3.14159

int main(void) {
  setlocale(LC_ALL, "Portuguese");

  float radius = 0.0;
  printf("Informe o valor do raio da esfera: ");
  scanf("%f", &radius);

  float volume = (4/3.0) * PI * powf(radius, 3.0);
  float total_area = 4.0 * PI * powf(radius, 2);

  printf("Volume: %.4f\nÁrea Total: %.4f\n", volume, total_area);
  
}