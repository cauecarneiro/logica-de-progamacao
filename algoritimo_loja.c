#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(0,"Portuguese");
	
	float valor[10], ValorUnitario, ValorTotal = 0, comissao;
	int  quant[10], i, MaisVendido = 0;
		
	for(i=1;i<11;i++){
		printf("Quantidade vendida do objeto %d: ", i);
		scanf("%d", &quant[i]);
		fflush(stdin);
		printf("Valor do objeto %d: R$",i);
		scanf("%f", &valor[i]);
		fflush(stdin);
		printf("\n");
	}
	
	system("cls");
	 
	for(i=1;i<11;i++){
		ValorUnitario = quant[i]*valor[i];
		printf("\nQuantidade vendida: %d\tValor unitário: R$%.2f\tValor total: R$%.2f ", quant[i], valor[i], ValorUnitario);
		ValorTotal += ValorUnitario;
	}
	
	printf("\nValor Total: %.2f ", ValorTotal);
	comissao = ValorTotal * 5/100;
	printf("\nComissão do vendendor: R$%.2f", comissao);
	
	for(i=1;i<11;i++){
		if(quant[i]>MaisVendido)
			MaisVendido = quant[i];
	}
	
	for(i=1;i<11;i++){
		if(quant[i]==MaisVendido)
			printf("\nPosição: %d\tValor: R$%.2f", i, valor[i]);
	}
}
	

