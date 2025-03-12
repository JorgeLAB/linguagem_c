void liberamapa();
void alocamapa();
void lermapa();

void imprimimapa();
int acabou();
void move(char direcao);

struct mapa {
	char** matriz;
  int linhas;
  int colunas;
};

typedef struct map MAPA;