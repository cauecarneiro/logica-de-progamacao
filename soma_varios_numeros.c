#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[]) {
    setlocale(0,"Portuguese");
    int n1,n2,n3,n4,s;
    printf("Digita quantro números:\n");
    scanf("%i", &n1);
    scanf("%i", &n2);
    scanf("%i", &n3);
    scanf("%i", &n4);
    s = n1+n2+n3+n4;
    printf("O resultado de %i+%i+%i+%i=%i",n1,n2,n3,n4,s);


    return 0;
}
