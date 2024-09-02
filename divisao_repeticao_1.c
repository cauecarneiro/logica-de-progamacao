#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(0,"Portuguese");
	float n1, n2;
	
	printf("Digite um valor: ");
	scanf("%f", &n1);
	fflush(stdin);
	
	printf("Digite outro valor: ");
	scanf("%f", &n2);
	fflush(stdin);
	
	while(n2<=0){
		printf("Digite outro valor: ");
		scanf("%f", &n2);
	}
		printf("Divisão entre %.2f e %.2f = %.2f", n1, n2, (n1/n2));
}
