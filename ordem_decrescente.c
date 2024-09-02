#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(0,"Portuguese");
	int i;
	
	for(i=10; i>=1; i--){
		printf("%i ", i);
	}
}
