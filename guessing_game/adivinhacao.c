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

  // interpolation with the integer
  printf("O número %d é o secreto. Não conte para ninguém!\n", numerosecreto);
}
