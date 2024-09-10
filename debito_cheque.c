#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(0,"Portuguese");
	
	float sal, c1, c2, cpmf1, cpmf2, saldo_final;
	printf("Digite o salário recebido: ");
	scanf("%f",&sal);

	printf("\nDigite o valor do 1º cheque: ");
	scanf("%f",&c1);
	printf("\nDigite o valor do 2º cheque: ");
	scanf("%f",&c2);
	cpmf1 = c1 * 0.38 / 100;
	cpmf2 = c2 * 0.38 / 100;
	
	saldo_final = sal - c1 - c2 - cpmf1 - cpmf2;
	
	printf("Valor do saldo : %.2f",saldo_final);

	return 0;	
}
