#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void fraca(float num, int* inteiro, float* frac){
	*inteiro = num - *frac;
	*frac = num * 10;
}

int main(){
	float num, frac;
	int inteiro;
	
	printf("Insira um numero float: ");
	scanf("%f", &num);
	
	fraca(num,&inteiro,&frac);
	
	printf("Parte inteira: %d\nParte fracionaria: %.0f", inteiro, frac);
}

