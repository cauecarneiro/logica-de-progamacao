#include <stdio.h>
#include <locale.h>
#include <time.h>
void main() {
    setlocale(0,"Portuguese");
    time_t t;
    time(&t);
    struct tm*data;
    data=localtime(&t);
    int d = data ->tm_year + 1900;
    int ano;
    printf("Atualmente estamos no ano de %i", d);
    printf("\nEm que ano voc� nasceu? ");
    fflush(stdin);
    scanf("%i", &ano);
    printf("---------------------------------------------------------------");
    int idad = d - ano;
    printf("\nSua idade atual � de %i anos", idad);
    if(idad>18){
        int anoali = ano + 18;
        int anosp = d - anoali;
        printf("\nSeu alistamento foi em %i, Ja se passaram %i anos", anoali, anosp);
    }      else if (idad<18) {
            int anoali = ano + 18;
            int anosf = 18 - idad;
            printf("\nSeu alistamento ser� em %i. Ainda faltam %i anos.", anoali, anosf);

    }          else {
                int anoali = ano + 18;
                printf("\nVoc� completa 18 anos exatamente em %i. V� se alistar!", anoali );





}printf("\n---------------------------------------------------------------");
}
