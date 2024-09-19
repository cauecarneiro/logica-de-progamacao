#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(0,"Portuguese");
	int vetl[5]={0}, vetc[10]={0}, mat [5][10], i, j;
	
	srand(time(NULL));
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 10; j++){
			mat[i][j] = rand() % 100;
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 20; j++){
			vetl[i] += mat[i][j];
		}
	}
	
	for(j = 0; j < 10; j++){
		for(i = 0; i < 5; i++){
			vetc[j] += mat[i][j];
		}
	}
	
	for(i = 0; i < 5; i++){
		printf("\nSoma da linha %d: %d", i, vetl[i]);
	}
	printf("\n");
	for(i = 0; i < 10; i++){
		printf("\nSoma da coluna %d: %d", i, vetc[i]);
	}	
}
