#define FANTASMA 'F'
#define HEROI '@'
#define VAZIO '.'
#define MOEDA '*'
#define PAREDE_VERTICAL '|'
#define PAREDE_HORIZONTAL '-'

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
int encontramapa(MAPA* m, POSICAO* p, char c);
int ehvalida(MAPA* m, int x, int y);
int ehvazia(MAPA* m, int x, int y);
void andanomapa(MAPA* m, int xorigem, int yorigem, int xdestino, int ydestino);
void copiamapa(MAPA* destino, MAPA* origem);
int praondefantasmavai(int xatual, int yatual,int* xdestino, int* ydestino);
int podeandar(MAPA* m, char personagem, int x, int y);
