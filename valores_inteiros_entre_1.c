#include <stdio.h>
int main(){
	int n, i;
	
	printf("Insira um valor: ");
	scanf("%i", &n);
	
	if(n>0){
	for(i=1; i<=n; i++){
		printf("%i ", i);
	}
	}
	
	while(n<=0){
		printf("\nValor invalido, digite um valor maior que 0");
		printf("\nInsira um valor: ");
		scanf("%i", &n);
	
		if(n>0){
		for(i=1; i<=n; i++){
		printf("%i ", i);
	}
	}
	}

}
