#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float potencia (float base, float expoente){
		float resultado = 1;
		int i;
		for (i=0; i<expoente; i++){
			resultado *= base;
		}
		
		return resultado;
}

int main(){
	setlocale(0,"Portuguese");
	float x, y;
	
	printf("Insira a base: ");
	scanf("%f", &x);
	fflush(stdin);
	
	printf("Insira o expoente: ");
	scanf("%f", &y);
	fflush(stdin);
	
	
	
	printf("%2.f", potencia(x,y));
	
	return 0;
}


