#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void fracionaria(float num, int *inteira, float *frac) {
    *inteira = (int)num;           
    *frac = num - *inteira;        
}

int main() {
	setlocale(0,"");
    float num;
    int parteInteira;
    float partefracionaria;

    printf("Digite um n�mero real: ");
    scanf("%f", &num);

    fracionaria(num, &parteInteira, &partefracionaria);

    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracion�ria: %.2f\n", partefracionaria);

    return 0;
}
