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
    printf("============= CINEMA ESTUDONAUTA =============");
    printf("\nHOR�RIO DO FILE: 19h - PRE�O DO INGRESSO: R$20");
    printf("\n----------------------------------------------");
    printf("\nQuanto dinheiro voc� tem? R$");
    scanf("%f", &d);
    printf("Agora s�o %i:%i horas.", h, m);
    if(d>=20) {
        printf("\nVoc� consegue comprar o ingresso!");

    }else{
        printf("\nVoc� n�o consegue comprar o ingresso...");
    }





}
