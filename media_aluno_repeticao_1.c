#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(0,"Portuguese");
	float n1,n2;
	
	printf("Nota avalia��o 1: ");
	scanf("%f", &n1);
	fflush(stdin);
	
	printf("Nota avalia��o 2: ");
	scanf("%f", &n2);
	fflush(stdin);
	
	while( n1>10 || n1<0 || n2>10 || n2<0){
		printf("\nValores inv�lidos (digite notas entre 0 e 10)");
		
		printf("\n\nNota avalia��o 1: ");
		scanf("%f", &n1);
		fflush(stdin);
	
		printf("Nota avalia��o 2: ");
		scanf("%f", &n2);
		fflush(stdin);
	}
	printf("M�dia do aluno: %.2f", ((n1+n2)/2));
	}
