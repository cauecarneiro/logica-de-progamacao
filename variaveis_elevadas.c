#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(0,"Portuguese");
	int base, expo, res;
	
	printf("Insira a base: ");
	scanf("%d", &base);
	
	printf("Insira o expoente: ");
	scanf("%d", &expo);
	
	res = pow(base, expo);
	
	printf("%d", res);
	
	return 0;
}
