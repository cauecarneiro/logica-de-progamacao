#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(0,"");
	int a,b;
	
	printf("\nEndereço de a: %p", &a);
	printf("\nEndereço de b: %p", &b);
	
	if(&a > &b)
		printf("\nMaior endereço é o de 'a' : %p", &a);
	else
		printf("\nMaior endereço é o de 'b' : %p", &b);
}
