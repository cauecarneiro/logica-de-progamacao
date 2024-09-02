#include <stdio.h>
int main(){
	int i, j;
	
	printf("Insira um valor: ");
	scanf("%i", &j);
	
	for(i=j; i>=0; i--){
		for(j=0; j<i; j++){
			printf("*");
		}
		printf("\n");
	}
}
