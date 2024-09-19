#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(0,"Portugese");
	int mat[4][4], i, j;
	
	srand(time(NULL));
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			mat[i][j]=rand()%100;
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i>j){
				printf("%d ", mat[i][j]);
			}
		}
		printf("\n");
	}
}
