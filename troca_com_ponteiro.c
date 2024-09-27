#include <stdio.h>
#include <stdlib.h>

void troca (float *a, float *b){
	float c;
	
	c = *a;
	*a = *b;
	*b = c;
	
}

int main(){
	float n1 = 100, n2 = 500;
	
	printf("%.2f %.2f", n1, n2);
	troca(&n1, &n2);
	printf("\n%.2f %.2f", n1, n2);
}
