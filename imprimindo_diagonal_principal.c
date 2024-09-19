#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(0,"Portuguese");
	int mat[5][5], i, j;
	
	srand(time(NULL));
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			mat[i][j]=rand()%100;
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==j)
				printf("%d ", mat[i][j]);
			else{
				printf("   ");
			}
		}
		printf("\n");
	}
}
