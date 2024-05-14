#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(0,"Portuguese");
    int n;
    printf(" Me diga um número e eu te direi se\n ele é POSITIVO, NEGATIVO ou NULO.");
    printf("\n\n Digite um número: ");
    fflush(stdin);
    scanf("%i", &n);
    if(n>1){
        printf(" O valor %i digitado é POSITIVO.", n);
    } else if (n<0){
            printf(" O valor %i digitado é NEGATIVO.", n);
    } else printf(" O valor %i digitado é NULO.", n);





}
