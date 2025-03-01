#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // prints the game header
  printf("\t**************************************\n");
  printf("\tBem vindo ao nosso jogo de adivinhação *\n");
  printf("\t**************************************\n");

  int segundos = time(0);
  srand(segundos);

  int numerogrande = rand();

  /*
    Variables must have single scope. Don`t have 2 declarations of this variable numerosecreto.
    If you do this by mistake, the compilator went issue a warning and will don`t generate the executable program.
  */

  int numerosecreto = numerogrande % 100;

  int chute;
  int acertou = 0;
  int tentativas = 1;
  double pontos = 1000;

  int nivel;
  printf("Qual o nível de dificuldade?\n");
  printf("(1) Fácil (2) Médio (3) Difícil \n\n");
  printf("Escolha: ");

  scanf("%d", &nivel);

  printf("\n");

  int numerotentativas;

  switch(nivel) {
    case 1:
      numerotentativas = 20;
      break;
    case 2:
      numerotentativas = 15;
      break;
    default:
      numerotentativas = 6;
      break;
  }

  // repetition structure

  for(int i = 1; i <= numerotentativas; i++) {
    printf("Total de tentativas %d.\n", numerotentativas);
    printf("Tentativa %d.\n", tentativas);

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);

    if(chute == -1 ){
      printf("\nO número secreto é %d. VOCE FALHOU \n", numerosecreto);
    }

    acertou = ( chute == numerosecreto );
    int maior = chute > numerosecreto;

    if(acertou) {
      break;
    }

    else if(maior) {
      printf("Seu chute foi MAIOR que o número secreto\n");
    }
    else {
      printf("Seu chute foi MENOR que o número secreto\n");
    }

    tentativas++;

    double pontosperdidos = abs(chute - numerosecreto) / (double)2;
    pontos = pontos - pontosperdidos;
  }

  printf("Fim de Jogo!\n");

  if(acertou) {
    printf("Você Ganhou!");
    printf("Você acertou em %d tentativas.\n", tentativas - 1);
    printf("Total de pontos: %f.\n", pontos);
  } else {
    printf("Você Perdeu, tente novamente!\n");
  }

  // alternative
  // printf("Total de pontos: %.2f.\n", pontos);
  // printf("Total de pontos: %.1f.\n", pontos);
}
