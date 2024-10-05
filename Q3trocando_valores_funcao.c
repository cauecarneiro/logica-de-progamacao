#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int trocando (int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

int main(){
	int a, b;
	
	printf("Insira o valor para A: ");
	scanf("%d", &a);
	
	printf("Insira o valor para B: ");
	scanf("%d", &b);
	
	printf("\nValores antes da troca\na:%d\tb:%d", a, b);
	trocando(&a,&b);
	printf("\nValores depois da troca\na:%d\tb:%d", a, b);
	
}
