#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int agrc, char *agrv[]){
    setlocale(0,"Portuguese");
    int i, res, j;

    printf("Digite o n�mero de qual voc� quer receber a tabuada: ");
    scanf("%d", &j);

        for(i=1; i<=10; i++){
        res = j * i;
        printf("%i x %i = %i\n", j, i, res);
    }

    return 0;
}
