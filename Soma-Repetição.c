#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    setlocale(0,"Portuguese");
    int soma, i;
    soma = 0;

    for (i=0;i<=10;i++){
        soma = soma + i;
    }
    printf("Soma: %d", soma);

    return 0;
}
