#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(0,"Portuguese");
	
	int mat[5][7], i, j, soma = 0;
	
	for(i = 0; i < 7; i++){
		for(j = 0; j<5; j++){
			printf("Digite um valor para a matriz [%d][%d]: ", j, i);
			scanf("%d", &mat[j][i]);
		}
	}
	
	for(i = 0; i < 7; i++){
		for(j = 0; j<5; j++){
			soma += mat[j][i];
		}
	}
	
	printf("Soma: %d", soma);
}
