#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(0,"");
	int a,b;
	
	printf("\nEndere�o de a: %p", &a);
	printf("\nEndere�o de b: %p", &b);
	
	if(&a > &b)
		printf("\nMaior endere�o � o de 'a' : %p", &a);
	else
		printf("\nMaior endere�o � o de 'b' : %p", &b);
}
