#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(0,"Portuguese");
	int mat[7][7], i, j;
	
	srand(time(NULL));
	
	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			mat[i][j]=rand()%100;
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	for(i=0;i<7;i++){
		printf("%d ", mat[i][6 - i]);
	}
}
