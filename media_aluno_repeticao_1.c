#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(0,"Portuguese");
	float n1,n2;
	
	printf("Nota avaliação 1: ");
	scanf("%f", &n1);
	fflush(stdin);
	
	printf("Nota avaliação 2: ");
	scanf("%f", &n2);
	fflush(stdin);
	
	while( n1>10 || n1<0 || n2>10 || n2<0){
		printf("\nValores inválidos (digite notas entre 0 e 10)");
		
		printf("\n\nNota avaliação 1: ");
		scanf("%f", &n1);
		fflush(stdin);
	
		printf("Nota avaliação 2: ");
		scanf("%f", &n2);
		fflush(stdin);
	}
	printf("Média do aluno: %.2f", ((n1+n2)/2));
	}
