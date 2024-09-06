#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float soma (float a, float b);
float subtracao (float a, float b);
float multiplicacao (float a, float b);
float divisao (float a, float b);
float potencia (float a, float b);

int main(){
	setlocale(0,"Portuguese");
	float x, y, m;
	char op;
	
	printf("Digite a operação: ");
	scanf("%c", &op);
	fflush(stdin);
	
	printf("Digite um valor:");
	scanf("%f", &x);
	fflush(stdin);
	
	printf("Digite outro valor: ");
	scanf("%f", &y);
	fflush(stdin);

	switch(op){
		case '+': m = soma(x,y);
		printf("%.2f", m);
		break;
		
		case'-': m = subtracao(x,y);
		printf("%.2f", m);
		break;
		
		case'/': m = divisao(x,y);
		printf("%.2f", m);
		break;
		
		case'*': m = multiplicacao(x,y);
		printf("%.2f", m);
		break;
		
		case'p': m = potencia(x,y);
		printf("%2.f", m);
		break;
		
	}
}





float soma (float a, float b){
	return a + b;
}

float subtracao (float a, float b){
	return a - b;
}

float multiplicacao (float a, float b ){
	return a * b;
}

float divisao (float a, float b){
	return a / b;
}

float potencia (float a, float b){
	float i, v = 1;
	for (i=0; i<b; i++){
		v *= a;
	}
	return v;
}
	
