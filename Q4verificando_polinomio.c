#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(0,"");
    char palavra[100];
    int i, tam, contrario = 0;

    printf("Digite um palavra: ");
    scanf("%s", &palavra);

    tam = strlen(palavra);

    for(i=tam;i>=0;i--){
        printf("%c", palavra[i]);
        contrario = 1;
    }

    if(contrario == 1){
        printf("É um polinomio");
    }else{
        printf("não é um polinomio");
    }
}
