#include <stdio.h>
#include <locale.h>
void main () {
setlocale(0,"Portuguese");
float v;
    printf("Qual foi o valor total das compras? R$");
    scanf("%f", &v);
    printf("---------------------------------------");
    printf("\nVoc� comprou R$%.2f na nossa loja", v);

    if (v>500) {
        printf("\n========== ATEN��O ==========");
        float d = v*0.90;
        float vn = v-d;
        printf("\nPor fazer mais de R$500,00 em compras, voc� vai receber R$%2.f de desconto", vn);
        printf("\nO valor a ser pago � R$%2.f! Volte sempre!", d);
        printf("\n---------------------------------------");
}
    printf("\nVolte sempre!");
    printf("\n---------------------------------------");




}
