#include <stdio.h>
#include <locale.h>
int main(){
    float F, C;
    printf("\tDigite a temperatura em Grau Fahrenheit: ");
    scanf("%f", &F);
    //C = (F - 30)/2;
    C = (F - 32) / 9 * 5;
    printf("\n\t%0.fC", C);
}
