#include <stdio.h>
#include <locale.h>
#include <time.h>
void main (){
    setlocale(0,"Portuguese");

    time_t t;
    struct tm *data;
    time (&t);
    data = localtime(&t);
    int ano = data->tm_year + 1900;

    int nasc;
    printf ("Em que ano você nasceu? ");
    scanf("%i", &nasc);
    int idade = ano - nasc;
    printf("-------------------------------------------------------\n");
    printf("Você tem %i anos certo? \nSeja bem vindo ao Banco do Brasil!\n", idade);
    if (idade >=65) printf("===== !!ATENÇÃO DIRIJA-SE PARA A FILA PREFERENCIAL! =====");
    printf("\n-------------------------------------------------------\n");


}
