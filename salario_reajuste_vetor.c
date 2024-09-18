#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(0,"Portuguese");
	float salario[5], salario_reajuste[5];
	int i;
	
	for(i=1;i<=5;i++){
		printf("Salário %d: ", i);
		scanf("%f", &salario[i]);
	}
	
	for(i=1;i<=5;i++){
		salario_reajuste[i] = salario[i] + salario[i]* 6/100;
		
		printf("\nSalario reajuste: %.2f", salario_reajuste[i]);
	}
   	
   	
}
