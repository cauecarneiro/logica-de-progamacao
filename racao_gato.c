#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(0,"Portuguese");
	float peso_saco, porcao_gato, resultado_5_dias;
	
	printf("Peso do saco de ração (KG): ");
	scanf("%f", &peso_saco);
	fflush(stdin);
	
	printf("Quantidade de ração fornecida para cada gato (G): ");
	scanf("%f", &porcao_gato);
	fflush(stdin);
	 
	resultado_5_dias = (peso_saco * 1000) - ((porcao_gato * 2) * 5);
	
	printf("Quanto restará de ração ápos 5 dias: %.2f gramas", resultado_5_dias);
	
	return 0;	
}
