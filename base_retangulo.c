#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(0,"Portuguese");
	int base, altura, calc;
	printf("Base: ");
	scanf("%i", &base);
	printf("Altura: ");
	scanf("%i", &altura);
	calc = base * altura;
	printf("%i", calc);
	}
