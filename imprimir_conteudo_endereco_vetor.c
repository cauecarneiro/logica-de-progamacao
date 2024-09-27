#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[10]={12,52,84,26,94,42,18,23,75,99}, i;
	
	for(i=0;i<10;i++)
		printf("\nConteudo: %d Endereco: %p", *(vet + i), vet + i);
	}
