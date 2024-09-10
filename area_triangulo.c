#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(0,"Portuguese");
	float base, altura, area;
	
	printf("Insira a base e a aultura: ");
	scanf("%f \n %f", &base, &altura);
	
	area = (base * altura) / 2;
	
	printf("Área do triângulo: %.2f", area);
	
	return 0;
}
