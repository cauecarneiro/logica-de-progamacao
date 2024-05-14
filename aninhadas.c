//VERSÃO COMPLETA
#include <stdio.h>
#include <locale.h>
void main(){
setlocale(0,"Portuguese");
    int n1,n2;
    printf("Primeiro valor: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Segundo valor: ");
    fflush(stdin);
    scanf("%i", &n2);
    if(n1>n2) {
        printf("O primeiro é maior: %i", n1);
    } else {
        if(n1<n2) {
            printf("O segundo é maior: %i", n2);
        } else {
            printf("Os dois são iguais");

        }

    }

}


//VERSÃO SIMPLIFICADA (ESLSE IF)
/*#include <stdio.h>
#include <locale.h>
void main(){
setlocale(0,"Portuguese");
    int n1,n2;
    printf("Primeiro valor: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Segundo valor: ");
    fflush(stdin);
    scanf("%i", &n2);
    if(n1>n2) {
        printf("O primeiro é maior: %i", n1);
    } else if(n1<n2) {
            printf("O segundo é maior: %i", n2);
        } else {
            printf("Os dois são iguais");

        }



}*/



//VERSÃO MAIS SIMPLIFICADA
/*#include <stdio.h>
#include <locale.h>
void main(){
setlocale(0,"Portuguese");
    int n1,n2;
    printf("Primeiro valor: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Segundo valor: ");
    fflush(stdin);
    scanf("%i", &n2);
    if(n1>n2) printf("O primeiro é maior: %i", n1);
    else if (n1<n2) printf("O segundo é maior: %i", n2);
    else printf("Os dois são iguais");
}*/




