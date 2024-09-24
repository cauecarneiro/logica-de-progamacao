#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    char palavra[100];
    int i, tam;

    printf("Digite um palavra: ");
    scanf("%s", &palavra);

    tam = strlen(palavra);

    for(i=tam;i>=0;i--){
        printf("%c", palavra[i]);
    }
}
