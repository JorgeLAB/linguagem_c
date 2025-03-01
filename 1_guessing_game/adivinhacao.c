#include <stdio.h>

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
  int ganhou = 0;
  int tentativas = 1;
  double pontos = 1000;

  // repetition structure

  while(ganhou == 0) {
    printf("Tentativa %d.\n", tentativas);

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);

    int acertou = ( chute == numerosecreto );
    int maior = chute > numerosecreto;

    if(acertou) {
      printf("Você acertou! O número secreto é %d.\n", chute);
      printf("Jogue de novo!\n");

      ganhou = 1;
    }

    else if(maior) {
      printf("Seu chute foi maior que o número secreto\n");
    }

    else {
      printf("Seu chute foi menor que o número secreto\n");
    }

    tentativas++;

    double pontosperdidos =   (chute - numerosecreto) / 2.0;
    pontos = pontos - pontosperdidos;
  }

  printf("Fim de Jogo!\n");
  printf("Você acertou em %d tentativas.\n", tentativas - 1);
  printf("Total de pontos: %f.\n", pontos);
}
