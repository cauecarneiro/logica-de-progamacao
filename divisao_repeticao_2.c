#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(0,"Portuguese");
	float n1, n2;
	
	printf("Digite um valor: ");
	scanf("%f", &n1);
	
	do{
		printf("Digite outro valor: ");
		scanf("%f", &n2);
	}while(n2<=0);
	
	printf("Divisão entre %.2f e %.2f = %.2f", n1, n2, (n1/n2));
}
