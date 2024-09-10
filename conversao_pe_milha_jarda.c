#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float polegada(float n);
float jarda(float n);
float milha(float n);

int main(){
	setlocale(0,"Portuguese");
	float pe;
	
	printf("Digite o valor em pés: ");
	scanf("%f", &pe);
	
	printf("%.2f em Polegadas: %.2f", pe, polegada(pe));
	printf("\n%.2f em  Jardas: %.2f", pe, jarda(pe));
	printf("\n%.2f em Milhas: %.5f", pe, milha(pe));
	
	return 0;
}
float polegada(float n){
	float convercao;
	convercao = n * 12;
	return convercao;
}
 
float jarda(float n){
	float convercao;
	convercao = n / 3;
	return convercao;
}

float milha(float n){
	float convercao;
	convercao = n / 5280;
}
