#include <stdio.h>
#include <stdlib.h>

int main(){
	int v[20], i;
	
	for(i=1;i<=20;i++){
		printf("Insira um valor para o vetor %d: ", i);
		scanf("%d", &v[i]);
	}
	
	for(i=20;i>=11;i--){
		printf("%d ", v[i]);
	}
	
	for(i=10;i>=1;i--){
		printf("%d ", v[i]);
	}
}
