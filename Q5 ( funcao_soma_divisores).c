#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int postivo (){
	int n;
	
	do{
		printf("Digite um n�mero positivo: ");
		scanf("%d", &n);
		
		if(n<=0){
			printf("N�mero inv�lido, digite um n�mero positivo");
		}
	} while(n<=0);
	
	return n;
}

int SomaDivisores (int num){
	int soma = 0, i;
	for(i=1; i<=num/2; i++)
		if(num%i==0){
			soma += i;
		}
		return soma;
}

int main(){
	setlocale(0,"Portuguese");
	int vet[5], i;
	
	for(i=1; i<=5; i++){
		printf("Digite o %i� n�mero: ", i);
		scanf("%i", &vet[i]);
	}
	
	for(i=1; i<=5; i++){
		printf("\nSoma dos divisores do %i� n�mero: %i", i, SomaDivisores(vet[i]));
	}
}


