#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(0,"Portuguese");
	int num;
	
	printf("Insira um n�mero: ");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("%d � PAR", num);
	}
	else{
		printf("%d � IMPAR", num);
	}
}
