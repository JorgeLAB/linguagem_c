#include <stdio.h>
#include <stdlib.h>

char** mapa;
int linhas;
int colunas;

int main() {
  FILE* f;
  f = fopen("mapa.txt", "r");

  if(f == 0) {
    printf("Erro na leitura do mapa\n");
    exit(1);
  }

  fscanf(f, "%d %d", &linhas, &colunas);
  printf("linhas %d colunas %d\n", linhas, colunas);

  mapa = malloc(sizeof(char*) * linhas);

  for(int i = 0; i < linhas; i++ ){
  	mapa[i] = malloc(sizeof(char*) * (colunas + 1));
  }

  for(int i = 0; i < 5; i++) {
  	fscanf(f, "%s", mapa[i]);
  }

  for(int i = 0; i < 5; i++){
  	for(int j = 0; j < 11; j++) {
  		printf("%c", mapa[i][j]);
  	}
  	printf("\n");
  }

  fclose(f);

  for(int i = 0; i < linhas; i++) {
  	free(mapa[i]);
  }

  free(mapa);
}
