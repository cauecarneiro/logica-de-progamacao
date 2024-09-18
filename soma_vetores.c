#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet1[25], vet2[25], vet3[25], i;
	
	for (i=0;i<25;i++){
		printf("Insira um valor para o vetor 1 [%d]: ", i);
		scanf("%d", &vet1[i]);
		fflush(stdin);
	}
	
	system("cls");
	
	for (i=0;i<25;i++){
		printf("Insira um valor para o vetor 2 [%d]: ", i);
		scanf("%d", &vet2[i]);
		fflush(stdin);
	}
	
	system("cls");
	printf("Somando os dois vetores:\n");
	
	for (i=0;i<25;i++){
		vet3[i] = vet1[i] + vet2[i];
		printf("%d ", vet3[i]);
	}
	
}
