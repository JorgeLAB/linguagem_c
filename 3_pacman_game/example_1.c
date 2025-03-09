#include <stdio.h>
#include <stdlib.h>

int main() {
	int** v = malloc(sizeof(int*) * 5);
	for(int i = 0; i < 5; i++) {
		v[i] = malloc(sizeof(int) * 10);
	}

	v[0][0] = 10;
	v[1][2] = 12;
  printf("inteiros alocado %d %d\n", v[0][0], v[1][2]);

  for(int i = 0; i < 5; i++) {
  	free(v[i]);
  }

  free(v);
}