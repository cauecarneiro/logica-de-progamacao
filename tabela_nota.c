#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char nome[3][30];
	float nota[3];
	int i;
	
	for(i=0;i<3;i++){
		printf("Digite o nome e a nota: ");
		scanf("%s%f", nome[i], &nota[i]);
	}
	
	printf("\n\nAluno\tNota\n");
	for(i=0;i<3;i++){
		printf("\n%s\t%.2f", nome[i], nota[i]);
	}
	
}
