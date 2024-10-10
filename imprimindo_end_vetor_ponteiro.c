#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float v[10]={1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,2.1};
	int i;
	
	for(i = 0; i < 10; i++){
		printf("Posicao %d: %.2f - %p \n", i, *(v + i), v + i);
	}
}
