#include <stdio.h>
#include <time.h>
void main () {
    time_t t;
    time (&t);
    struct tm*data;
    data = localtime (&t);
    int ano = data ->tm_year + 1900;

    int nascimento;
    printf("Em que ano voce nasceu? ");
    scanf("%i", &nascimento);
    printf("------------------------------------");
    int idade = ano -nascimento;
    printf("\nVoce tem %i anos, certo?", idade);
    printf("\nSeja bem vindo ao Banco do Brasil!");
        if (idade>65) {
                printf ("\n=== ANTEN�AO DIRIJA-SE PARA A FILA PREFERENCIAL ===\n------------------------------------");

}







}
