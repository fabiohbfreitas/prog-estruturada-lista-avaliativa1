#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main () {
  setlocale(LC_ALL, "Portuguese");

  int user_choice = -1;
  float total = 0.0;

  while (user_choice != 4) {
    printf("Menu de frutas:\n");
    printf("1 - Abacaxi - 5,00/unidade\n");
    printf("2 - Maça    - 1,00/unidade\n");
    printf("3 - Pera    - 4,00/unidade\n");
    printf("4 - Finalizar\n\n");
    printf("Escolha opção desejada:  ");
    scanf("%d", &user_choice);

    if (user_choice == 4) {
      break;
    } else if (user_choice <= 0 || user_choice > 4) {
      if (user_choice != INT_MIN) {
        printf("[ERRO] Opção Invalida.\n");
      }
    } else {
      // printf("%d", user_choice);
      int qtd = INT_MAX;
      do {
        if (qtd <= 0) {
          if (qtd != INT_MAX) {
            printf("[ERRO] Quantidade Invalida.\n");
          }
        }
        printf("Escolha a quantidade desejada: ");
        scanf("%d", &qtd);
      } while (qtd <= 0);

      if (user_choice == 1) {
        total += (qtd * 5.0);
      } else if (user_choice == 2) {
        total += (qtd * 1.0);
      } else if (user_choice == 3) {
        total += (qtd * 4.0);
      }
    } 
  }
  printf("O total é R$%.2f\n", total);
  return EXIT_SUCCESS;
}