#include <stdio.h> 
#include <locale.h>
int main(){
	setlocale(0,"Portuguese");
	int mercadoria_total, i = 1;
	float valor_mercadoria, valor_total, media;
	
	printf("N�mero total de mercadorias em estoque: ");
	scanf("%i", &mercadoria_total);
	do{
		printf("Valor da mercadoria %d: ", i);
		scanf("%f", &valor_mercadoria);
		i++;
		valor_total += valor_mercadoria;
	}while(i<=mercadoria_total);
	
	printf("Valor total das mercadorias R$%.2f\nValor em m�dia das mercadorias R$%.2f", valor_total, (valor_total/mercadoria_total));
	
	
}
