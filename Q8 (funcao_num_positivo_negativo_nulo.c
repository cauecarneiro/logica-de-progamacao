#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numero (int n){
	if(n==0)
		return 0;

	if(n>=1) 
		return 1;
	
	if(n<1)
		return -1;
}

int main(){
	setlocale(0,"Portuguese");
	int num;
	
	printf("Digite um n�mero que eu retornei 0 para n=0, 1 para n poritivo e -1 para n negativo\n");
	printf("Digite o n�mero: ");
	scanf("%i", &num);
	
	printf("%i", numero(num));
}
