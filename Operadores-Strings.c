/*#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20
int main(){
    setlocale(0,"Portuguese");

    char origem[N] = {"Olá mundo"};
    char destino[N];

    //antes do strcpy
    puts(origem);
    puts(destino);

    //dps do strcpy
    strcpy(destino, origem);
    puts(origem);
    puts(destino);

}*/

/*#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50
int main(){
    setlocale(0,"Portuguese");
    char s1[N]={"Lógica de"};
    char s2[N]={" Progamação"};
//antes do strcat
    printf("String 1: %s", s1);
    printf("\nString 2:%s\n\n", s2);
//dps do strcat
    strcat(s1,s2);
    puts(s1);//somete declarada a varielvel s1 e foi impresso as duas
}*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50
int main(){
    setlocale(0,"Portuguese");

    char s[N];
    int i;

    printf("Digite um texto: ");
    gets(s);
    i = strlen(s);
    printf("Tamanho do texto: %i", s);
}
