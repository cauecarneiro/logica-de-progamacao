#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(0,"Portuguese");
	float n1,n2;
	char novo_calculo;
	
	do{
	printf("\nNota avalia��o 1: ");
	scanf("%f", &n1);
	fflush(stdin);
	
	printf("\nNota avalia��o 2: ");
	scanf("%f", &n2);
	fflush(stdin);
	
	if(n1>10 || n1<0 || n2>10 || n2<0){
		printf("\nValor inv�lido, digite um valor entre 0 e 10");
		
		printf("\nNota avalia��o 1: ");
		scanf("%f", &n1);
		fflush(stdin);
	
		printf("\nNota avalia��o 2: ");
		scanf("%f", &n2);
		fflush(stdin);
		
	}
	
	printf("\nM�dia do aluno: %.2f", ((n1+n2)/2));
	
	printf("\n\n\nNOVO C�LCULO (S/N): ");
	scanf("%c", &novo_calculo);
	
	}while(novo_calculo == 's');
	}
	
	
