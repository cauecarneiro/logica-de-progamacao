#include <stdio.h>
#include <locale.h>
void main () {
    setlocale(0,"Portuguese");
    float n;
    printf("Digite um n�mero: ");
    scanf("%f", &n);
    if (n>0) {
        float i = 1/n;
        printf("O inverso de %.0f � igual a %.2f", n, i);

    }else{
        float o = -(n);
        printf("O oposto de %.0f � igual a %1.f", n, o);

    }




}
