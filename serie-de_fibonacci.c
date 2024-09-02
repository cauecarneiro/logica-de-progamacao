#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
    setlocale(0,"Portuguese");
    int i, ant1 = 0, ant2 = 1, atual;

    printf("Série de Fibonacci: ");
    printf("%d ", ant1);


    for (i=3; i<=8; i++){
    atual = ant1 + ant2;
    printf("%d ", atual);
    ant2 = ant1;
    ant1 = atual;
    }

    return 0;
}
