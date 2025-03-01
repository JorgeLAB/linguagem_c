#include <stdio.h>

int main() {
	int first_number;
	int second_number;

	printf("Digite o primeiro número:");
  scanf("%d", &first_number);

  printf("Digite o segundo número:");
  scanf("%d", &second_number);

  printf("\n");

  int result = first_number + second_number;

  printf("O resultado final é %d.\n", result);
}
