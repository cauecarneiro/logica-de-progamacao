#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(0,"Portuguese");
	int num;
	
	printf("Insira um número: ");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("%d é PAR", num);
	}
	else{
		printf("%d é IMPAR", num);
	}
}
