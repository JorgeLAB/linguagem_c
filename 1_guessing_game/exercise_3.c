#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  printf("\t**************************************\n");
  printf("\t Tabuada até 10 *\n");
  printf("\t**************************************\n");

	while(1){
		int numero_tabuada = 0;

    printf("Escolha um número de 1 até 10: \n");
  	scanf("%d", &numero_tabuada);

  	if(numero_tabuada > 10 || numero_tabuada < 1 ){
  		printf("Número escolhido de ser maior que 0 e menor ou igual a 10!\n");

  		continue;
  	}

  	printf("\nSua Tabuada X:\n");

  	for(int i = 1; i <= 10; i++){
  		int result = i * numero_tabuada;

  		printf("-----------------\n");
      printf("\t %d x %d = %d", numero_tabuada, i, result);
      printf("\n-----------------");
  	}

  	printf("\n");
    
    char decisao[10];

	  printf("Deseja SAIR - sim/nao: \n");
	  scanf("%9s", decisao);

  	if(strcmp(decisao, "sim") == 0){
  		printf("Obrigado por usar nosso recurso!");

  		break;
  	} else {
  		continue;
  	}
  }
}
