#include <stdio.h>

int main() {
  char palavrasecreta[20];

  sprintf(palavrasecreta, "MELANCIA");

  int acertou = 0;
  int enforcou = 0;

  printf("%d %d\n", acertou, !acertou);

  acertou = 1;

  printf("%d %d\n", acertou, !acertou);  

  // do {
    

  // } while(!acertou && !enforcou)
}
