struct mapa {
  char** matriz;
  int linhas;
  int colunas;
};

typedef struct mapa MAPA;

struct posicao {
  int x;
  int y;
};

typedef struct posicao POSICAO;

void liberamapa(MAPA* m);
void alocamapa(MAPA* m);
void lermapa(MAPA* m);
void imprimimapa(MAPA* m);
void encontramapa(MAPA* m, POSICAO* p, char c);