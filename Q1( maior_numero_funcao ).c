#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float maior (float a, float b){
	if (a>b)
		return a;
	else 
		return b;
}

int main(){
	setlocale(0,"Portuguese");
	float x, y, m;
	
	printf("Digite um n�mero: ");
	scanf("%f", &x);
	
	printf("Digite outro n�mero: ");
	scanf("%f", &y);
	
	m = maior(x,y);
	
	printf("Maior n�mero entre %.2f e %.2f: %.2f", x, y, m);
}
