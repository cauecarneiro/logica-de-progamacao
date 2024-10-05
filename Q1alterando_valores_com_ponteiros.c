#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(0,"");
	
	int i = 10, *pi;
	char c = 'C', *pc;
	float f = 0.5, *pf;
	
	pi = &i;
	pc = &c;
	pf = &f;
	
	printf("\tAntes da troca\n\tint = %d   char = %c   float = %.2f",i,c,f);
	
	*pi = 20;
	*pc = 'A';
	*pf = 0.7;
	
	printf("\n\n\tDepois da troca\n\tint = %d   char = %c   float = %.2f", i,c,f);
	
}
