#include <stdio.h>
#include <locale.h>
#include <time.h>
void main(){
    setlocale(0,"Portuguese");
    time_t t;
    time(&t);
    struct tm*data;
    data=localtime (&t);
    int d = data ->tm_year + 1900;
    int ano;
    printf("Atualmente estamos no ano de %i", d);
    printf("\nEm que ano voc� nasceu? ");
    scanf("%i", &ano);
    printf("---------------------------------------");
    int id = d-ano;
    printf("\nSua idade atual � de %i anos", id);
    if(id>=18){
        printf("\nJ� Fez 18 anos. Espero que voc� tenha se alistado.");

    } else{
        printf("\nAinda n�o tem 18 anos. N�o pode se alistar");
    }




}
