#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]){
    setlocale(0,"Portuguese");
    int n1,n2;
    printf("---- Me diga dois n�meros que eu direi qual � o maior entre eles ----");
    printf("\n\nPrimeiro n�mero: ");
    scanf("%i", &n1);
    printf("\nSegundo n�mero: ");
    scanf("%i", &n2);
    if (n1>n2){
        printf("\nO maior n�mero � %i", n1);
    } else if (n2>n1) {
        printf("\nO maior n�mero � %i", n2);

    } else {
        printf("\nOs dois s�o iguais");
    }

return 0;
}
