#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numero (int n){
	if(n%2==0)
		return 1;
	else 
		return 0;
}

int main(){
	setlocale(0,"Portuguese");
	int num;
	
	printf("Digite um n�mero que eu retornei 0 para �mpar e 1 para par\n");
	printf("Digite o n�mero: ");
	scanf("%i", &num);
	
	printf("%i", numero(num));
}
