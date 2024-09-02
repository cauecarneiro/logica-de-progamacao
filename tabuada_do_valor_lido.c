#include <stdio.h>
int main(){
	int n, i, res;
	
	printf("Digite um valor: ");
	scanf("%i", &n);
	
	for(i=1; i<=10; i++){
		res = i*n;
		printf("\n%i x %i = %i", n, i, res);
	}
}
