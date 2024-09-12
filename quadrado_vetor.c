#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(0,"Portuguese");
	
	int vet[6], vet2[6], i;
	
	for(i=1;i<=6;i++){
		printf("Digite um número: ");
		scanf("%d", &vet[i]);
	}
	
	for(i=1;i<=6;i++){
		printf("%d ", vet[i]);

	}
	
	for(i=1;i<=6;i++){
		vet2[i]=pow(vet[i], 2);
	}
	
	printf("\n");
	for(i=1;i<=6; i++){
		printf("%d ", vet2[i]);
	}
}
