#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(0,"Portuguese");
    int n;
    printf(" Me diga um n�mero e eu te direi se\n ele � POSITIVO, NEGATIVO ou NULO.");
    printf("\n\n Digite um n�mero: ");
    fflush(stdin);
    scanf("%i", &n);
    if(n>1){
        printf(" O valor %i digitado � POSITIVO.", n);
    } else if (n<0){
            printf(" O valor %i digitado � NEGATIVO.", n);
    } else printf(" O valor %i digitado � NULO.", n);





}
