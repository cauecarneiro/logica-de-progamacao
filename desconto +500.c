#include <stdio.h>
#include <string.h>
#include <locale.h>
void main() {
    setlocale(0,"Portuguese");
    float p;
    printf("Qual foi o valor total das compras? R$");
    scanf("%f", &p);
    printf("------------------------------------\nVoc� comprou R$%.2f na nossa loja.", p);
    if(p<=499) printf("\nVolte sempre!");
    int d = (p*10/100) ;
    if(p>=500) printf("\n============= ATEN��O =============\nPor fazer mais de R$500,00 em compras, voc� vai receber R$%i de desconto.", d);
               float pd = p - (p*10/100);
    if(p>=500) printf("\nO valor total a ser pago ser� de %.2f\nVolte sempre!\n-------------------------", pd);
}


