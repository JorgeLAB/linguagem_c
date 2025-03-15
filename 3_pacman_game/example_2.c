#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Usamos a função strcpy() para copiar um array para o outro.
Essa função, como já explicamos, serve para copiar strings.
Mas, às vezes, queremos copiar outros elementos que não são strings.
Por exemplo, podemos querer uma struct inteira.
*/

struct contato {
	char nome[20];
	char email[50];
};

typedef struct contato CONTATO;

// int main() {
// 	CONTATO teste;

// 	strcpy(teste.nome, "teste nome");
// 	strcpy(teste.email, "teste.email@dominio.com");
// }

/*
Se quiséssemos copiar a struct inteira, ao invés de copiar atributo por atributo, poderíamos fazer uso da instrução memcpy().
Como o nome já diz, ela copia o que está na memória.
A assinatura dela é bem parecida com a da strcpy(), com a diferença de que,
além de passar o destino e a origem, precisamos passar também a quantidade 
de bytes que queremos copiar.
*/

// int main() {
// 	CONTATO teste_copy;

// 	memcpy(&teste_copy, &teste, sizeof(CONTATO))
// }

/*
Outra função bastante comum quando manipulamos a memória é a função memset().
Geralmente a usamos para inicializar structs ou arrays com algum valor padrão
(geralmente, "nulo"). Isso é especialmente útil,
pois muitos compiladores de C não limpam as regiões de 
memória antes de liberá-la para o programador.
Então é comum termos "lixo".

Para não termos nunca o problema de ter dados sujos, 
podemos sempre limpar nossas structs, por exemplo, função limpa todos os dados em um espaço de memória.
*/

int main() {
	CONTATO teste_copy;

	memset(&teste_copy, 0, sizeof(CONTATO))
}
