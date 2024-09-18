#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	int vet[10], vetquad[10], i;
	
	for(i=0;i<10;i++){
		printf("Insira um valor para o vetor [%d]: ", i);
		scanf("%d", &vet[i]);

	}
	
	printf("Vetor ao quadrado:\n");
	
	for(i=0;i<10;i++){
		vetquad[i]=pow(vet[i], 2);
		printf("%d ", vetquad[i]);
	}
}
