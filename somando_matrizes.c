#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(0,"Portuguese");
	
	int mat1[3][3], mat2[3][3], mat3[3][3], i, j;
	
	srand(time(NULL));
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat1[i][j] = rand()%100;
			mat2[i][j] = rand()%100;
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat3[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%2d ", mat1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%2d ", mat2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%2d ", mat3[i][j]);
		}
		printf("\n");
	}
}
