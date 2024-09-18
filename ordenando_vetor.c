#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(0,"Portuguese");
	int i, vet[100], troca = 0, aux;
	
	srand(time(NULL));
	
	for(i=0;i<100;i++){
		vet[i] = rand() % 1000;
	}	
	
	printf("\nAntes da ordenção:\n");
	for(i=0;i<100;i++){
		printf("%3d ", vet[i]);
	}
	
	do{	
		troca = 0;
		for(i=0;i<99;i++){
			if(vet[i]>vet[i+1]){
				aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
				troca = 1;
			}
		}
	}while(troca == 1);
	
	printf("\nApós a ordenação:\n");
	for(i=0;i<100;i++){
		printf("%3d ", vet[i]);
	}
	
	return 0;
}
