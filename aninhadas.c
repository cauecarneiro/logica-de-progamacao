//VERS�O COMPLETA
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
        printf("O primeiro � maior: %i", n1);
    } else {
        if(n1<n2) {
            printf("O segundo � maior: %i", n2);
        } else {
            printf("Os dois s�o iguais");

        }

    }

}


//VERS�O SIMPLIFICADA (ESLSE IF)
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
        printf("O primeiro � maior: %i", n1);
    } else if(n1<n2) {
            printf("O segundo � maior: %i", n2);
        } else {
            printf("Os dois s�o iguais");

        }



}*/



//VERS�O MAIS SIMPLIFICADA
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
    if(n1>n2) printf("O primeiro � maior: %i", n1);
    else if (n1<n2) printf("O segundo � maior: %i", n2);
    else printf("Os dois s�o iguais");
}*/




