#include <stdio.h>
#include <locale.h>
#include <time.h>
void main(){
    setlocale(0,"Portuguese");
    time_t t;
    time(&t);
    struct tm*data;
    data=localtime (&t);
    int h = data ->tm_hour;
    int m = data ->tm_min;
    float d;
    printf("============= CINEMA =============");
    printf("\nHORÁRIO DO FILME: 19h - PREÇO DO INGRESSO: R$20");
    printf("\n----------------------------------------------");
    printf("\nQuanto dinheiro você tem? R$");
    scanf("%f", &d);
    printf("Agora são %i:%i horas.", h, m);
    if(d>=20) {
        printf("\nVocê consegue comprar o ingresso!");

    }else{
        printf("\nVocê não consegue comprar o ingresso...");
    }
}
