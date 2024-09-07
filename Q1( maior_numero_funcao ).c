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
	
	printf("Digite um número: ");
	scanf("%f", &x);
	
	printf("Digite outro número: ");
	scanf("%f", &y);
	
	m = maior(x,y);
	
	printf("Maior número entre %.2f e %.2f: %.2f", x, y, m);
}
