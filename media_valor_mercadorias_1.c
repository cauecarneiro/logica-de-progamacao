#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(0,"Portuguese");
	float valor_mercadoria, valor_total, mercadoria_total;
	char continuar;
	
	do{
		printf("Valor mercadoria: ");
		scanf("%f", &valor_mercadoria);
		fflush(stdin);
		printf("MAIS MERCADORIAS (S/N) ? ");
		scanf("%c", &continuar);
		valor_total += valor_mercadoria;
		mercadoria_total ++;
	}while(continuar == 's' || continuar == 'S');
	
	printf("Valor total das mercadorias R$%.2f\nValor em média das mercadorias R$%.2f", valor_total, valor_total/mercadoria_total);
}
