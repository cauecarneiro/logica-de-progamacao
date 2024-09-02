#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]){
    setlocale(0,"Portuguese");
    int n1,n2;
    printf("---- Me diga dois números que eu direi qual é o maior entre eles ----");
    printf("\n\nPrimeiro número: ");
    scanf("%i", &n1);
    printf("\nSegundo número: ");
    scanf("%i", &n2);
    if (n1>n2){
        printf("\nO maior número é %i", n1);
    } else if (n2>n1) {
        printf("\nO maior número é %i", n2);

    } else {
        printf("\nOs dois são iguais");
    }

return 0;
}
