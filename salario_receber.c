#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(0,"Portuguese");
	float hora_trab, sal_min, val_hora_trab, sal_bruto, imp, sal_receber;
	
	printf("Horas Trabalhadas: ");
	scanf("%f", &hora_trab);
	
	printf("Salário Mínimo: ");
	scanf("%f", &sal_min);
	
	val_hora_trab = sal_min / 2;
	sal_bruto = hora_trab * val_hora_trab;
	imp = sal_bruto * 3/100;
	sal_receber = sal_bruto - imp;
	
	printf("Salário a receber: %.2f", sal_receber);
	
	return 0;	

}


