#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(0,"Portuguese");
	int mat[5][4], i, j, transposta[4][5];
	
	srand(time(NULL));
	
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			mat[i][j]=rand()%100;
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			transposta[j][i] = mat[i][j];
		}
	}
	
	printf("\n");
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("%d ", transposta[i][j]);
		}
		printf("\n");
	}
}
