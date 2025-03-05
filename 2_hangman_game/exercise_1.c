#include <stdio.h>

void soma(int* num, int a, int b) {
  *num = a + b;
}

int main() {
  int num = 0;

  int a;
  int b;

  printf("Escolha o primeiro número:\n");
  scanf("%d", &a);

  printf("Escolha o segundo número:\n");
  scanf("%d", &b);

  soma(&num, a, b);

  printf("O resultado da Soma entre %d e %d é %d \n", a, b, num);
}
