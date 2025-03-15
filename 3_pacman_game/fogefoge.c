#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fogefoge.h"
#include "mapa.h"

// apelido para o tipo
MAPA m;
POSICAO heroi;

int praondefantasmavai(int xatual, int yatual, 
  int* xdestino, int* ydestino) {

  int opcoes[4][2] = {
    {xatual, yatual +1},
    {xatual +1, yatual},
    {xatual, yatual -1},
    {xatual -1, yatual}
  };

  srand(time(0));

  for(int i = 0; i < 10; i++) {
    int posicao = rand() % 4;

    if(podeandar(&m, opcoes[posicao][0], opcoes[posicao][1])) {
      *xdestino = opcoes[posicao][0];
      *ydestino = opcoes[posicao][1];

      return 1;
    }
  }

  return 0;
}

void fantasmas() {
  MAPA copia;

  copiamapa(&copia, &m);

  for(int i = 0; i < m.linhas; i++) {
    for(int j = 0; j < m.colunas; j++) {

      // anda apenas para a direita
      if(copia.matriz[i][j] == FANTASMA) {
        int xdestino;
        int ydestino;

        int encontrou = praondefantasmavai(i, j, &xdestino, &ydestino);

        if(encontrou){
          andanomapa(&m, i, j, xdestino, ydestino);
        }
      }
    }
  }

  liberamapa(&copia);
}

int acabou() {
  return 0;
}

int ehdirecao(char direcao) {
  return direcao == ESQUERDA ||
         direcao == CIMA ||
         direcao == BAIXO ||
         direcao == DIREITA;
}

void move(char direcao) {
  if(!ehdirecao(direcao))
    return;

  int proximox = heroi.x;
  int proximoy = heroi.y;

  switch(direcao) {
    case ESQUERDA:
      proximoy--;
      break;
    case CIMA:
      proximox--;
      break;
    case BAIXO:
      proximox++;
      break;
    case DIREITA:
      proximoy++;
      break;
  }

  if(!podeandar(&m, proximox, proximoy))
    return;

  andanomapa(&m, heroi.x, heroi.y, proximox, proximoy);

  heroi.x = proximox;
  heroi.y = proximoy;
}

int main() {
  lermapa(&m);
  encontramapa(&m, &heroi, HEROI);

  // um letra é um direcional

  do {
   fantasmas();
   imprimimapa(&m);

   char comando;
   scanf(" %c", &comando);

   move(comando);
  } while(!acabou());

  liberamapa(&m);
}
