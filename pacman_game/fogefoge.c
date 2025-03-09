#include <stdio.h>
#include <stdlib.h>

int main() {
	char mapa[5][10+1];

  FILE* f;
  f = fopen("mapa.txt", "r");

  if(f == 0) {
    printf("Erro na leitura do mapa\n");
    exit(1);
  }

  for(int i = 0; i < 5; i++) {
  	fscanf(f, "%s", mapa[i]);
  }

  // for(int j = 0; j < 5; j++) {
  // 	printf("%s\n", mapa[j]);
  // }

  for(int i = 0; i < 5; i++){
  	for(int j = 0; j < 11; j++) {
  		printf("%c", mapa[i][j]);
  	}
  	printf("\n");
  }

  fclose(f);
}
