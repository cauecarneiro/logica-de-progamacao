#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
    setlocale(0,"Portuguese");
    float sal, per, aum, nsal;
    printf("Insira o sal�rio: ");
    scanf("%f", &sal);
    printf("Insira o percentual de aumento: ");
    scanf("%f", &per);
    aum= sal*per/100;
    printf("Valor do aumento: %.0f", aum);
    nsal=sal+aum;
    printf("\nNovo sal�rio: %.0f", nsal);

    return 0;
}
