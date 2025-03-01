#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main() {

  // prints the game header
  printf("\t**************************************\n");
  printf("\tBem vindo ao nosso jogo de adivinhação *\n");
  printf("\t**************************************\n");

  /*
    Variables must have single scope. Don`t have 2 declarations of this variable numerosecreto.
    If you do this by mistake, the compilator went issue a warning and will don`t generate the executable program.
  */

  int numerosecreto = 42;

  int chute;

  // repetition structure

  for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {
    printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);

    int acertou = ( chute == numerosecreto );
    int maior = chute > numerosecreto;
    int menor = chute < numerosecreto;

    if(acertou) {
      printf("Você acertou! O número secreto é %d.\n", chute);
      printf("Jogue de novo!\n");

      break;
    }

    else if(maior) {
      printf("Seu chute foi maior que o número secreto\n");
    }

    else {
      printf("Seu chute foi menor que o número secreto\n");
    }
  }

  printf("Fim de Jogo!\n");
}
