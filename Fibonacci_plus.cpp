#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
    setlocale(0,"Portuguese");
    int i, ant1 = 0, ant2 = 1, atual, pos;

    printf("Série de Fibonacci: ");
    
    printf("\nPosição: ");
    scanf("%i", &pos);
	
	printf("%d ", ant1);


    for (i=1; i<=pos; i++){
    atual = ant1 + ant2;
    printf("%d ", atual);
    ant2 = ant1;
    ant1 = atual;
    }

    return 0;
}
