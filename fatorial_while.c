#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(0,"Portuguese");
	
	int a,b = 1;
	
	printf("Digite um número: ");
	scanf("%i", &a);
	
	while(a>1){
		b = a--*b;
	}
	
	printf("%i", b);
	
	return 0;
}
