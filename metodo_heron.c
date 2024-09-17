#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(0,"Portuguese");
	
	float n, k=1, i;
	
	printf("Insira um valor N: ");
	scanf("%f", &n);
	
	for(i=1;i<=12;i++){
		k = (k + n/k)/2;
		printf("\nRaiz aproximada: %f", k);
	}
}
