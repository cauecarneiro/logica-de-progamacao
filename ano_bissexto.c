#include <stdio.h>
#include <locale.h>
#include <time.h>
void main() {
    setlocale(0,"Portuguese");
    int ano;
    printf("Digite um ano qualquer: ");
    scanf("%i", &ano);
    if(ano%4==0 && ano%100!=0 || ano%400==0) {
            printf("O ano de %i é bissexto!", ano);
        }else{
            printf("O ano de %i não é bissexto!", ano);
        }
}
