#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(0,"Portuguese");
	float peso_saco, porcao_gato, resultado_5_dias;
	
	printf("Peso do saco de ra��o (KG): ");
	scanf("%f", &peso_saco);
	fflush(stdin);
	
	printf("Quantidade de ra��o fornecida para cada gato (G): ");
	scanf("%f", &porcao_gato);
	fflush(stdin);
	 
	resultado_5_dias = (peso_saco * 1000) - ((porcao_gato * 2) * 5);
	
	printf("Quanto restar� de ra��o �pos 5 dias: %.2f gramas", resultado_5_dias);
	
	return 0;	
}
