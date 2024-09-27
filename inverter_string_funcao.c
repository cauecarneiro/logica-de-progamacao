#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char inverter (char nome[100]){
	int i, tam;
	tam = strlen(nome);
	for(i=tam;i>=0;i--){
		printf("%c", nome[i]);
	}
}

int main(){
	char nom[100];
	int tam;
	printf("Escreva algo: ");
	scanf("%s", nom);
	
	tam = strlen(nom);
	
	inverter(nom);
}
