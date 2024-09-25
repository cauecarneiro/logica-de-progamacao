#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void maiorMenor(int *vet, int tam, int *maior, int *menor);

int main(){
	int menor, maior, v[10] = {34,23,64,14,63,85,25,74,72,1};
	
	maiorMenor(v, 10, &maior, &menor);
	printf("\n\n%d %d", maior, menor);
    return 0;
}

void maiorMenor(int *vet, int tam, int *maior, int *menor){
	int i;
	*menor = *vet;
	*menor = *vet;
	
	for(i=1;i<tam;i++){
		if(*menor > *(vet + i))
			*menor = *(vet + i);
		if(*maior < *(vet + i))
			*maior = *(vet + i);
	}
}
