#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define PI 3.14159

int main(){
	setlocale(0,"Portuguese");
	float raio, area;
	
	printf("Insira o raio: ");
	scanf("%f", &raio);
	
	area = pow(raio, 2);
	
	printf("Área da circunferencia: %.2f", (area*PI));
	
	return 0;
}
