#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *arquivo = fopen("teste.txt", "r"); // Abre o arquivo para leitura

  if (arquivo == 0) {
    printf("Erro ao abrir o arquivo!\n");
    exit(1);
  }

  char linha[256]; // Buffer para armazenar cada linha lida
  int numeroLinha = 1;

  // Lê o arquivo linha por linha
  while (fgets(linha, sizeof(linha), arquivo) != NULL) {
    printf("Linha %d: %s", numeroLinha, linha);
    numeroLinha++;
  }

  fclose(arquivo); // Fecha o arquivo
}
