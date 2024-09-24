#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){

    char palavra[100];
    int i=0, tam, tamanho = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tam = strlen(palavra);

    while (palavra[i] != '\0'){
    tamanho++;
    i++;
    }


    printf("\n%d", tam);
    printf("\n%d", tamanho);
}
