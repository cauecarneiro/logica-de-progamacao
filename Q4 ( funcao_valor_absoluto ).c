#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int absoluto (num){
	if (num > 0)
		return num;
	else
		return -num;
}

int main(){
	setlocale(0,"Portuguese");
	int vet[5], i;
	
	for(i=1; i<6; i++){
		printf("Digite o %iº número: ", i);
		scanf("%i", &vet[i]);
	}
	
	for(i=1; i<6; i++){
		printf("\nValor absoluto %iº número: %i", i, vet[i]);
	}
	
	
}
