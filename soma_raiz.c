#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(0,"Portuguese");
	int op;
	
	printf("1-Somar dois números\n2-Raiz quadrada de um número\nDigite a opcão desejada: ");
	scanf("%d", &op);
	
	if(op==1){
		int n1,n2;
		printf("Digite dois valores: ");
		scanf("%d %d", &n1, &n2);
		printf("\n%d + %d = %d", n1, n2, (n1+n2));
	}
	else{
		int n, raiz;
		printf("Digite um número: ");
		scanf("%d", &n);
		raiz = sqrt(n);
		printf("Raiz quadrada de %d = %d", n, raiz);
	}
}
