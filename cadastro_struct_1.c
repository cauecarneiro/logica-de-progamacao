#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale(0,"Portuguese");

    tipo_pessoa lista[TAM];
    int i;

    for(i=0;i<TAM;i++){
        printf("Insira os dados da %dª pessoa\n", i+1);
        printf("Nome: ");
        scanf("%50[^\n]", &lista[i].nome);

        printf("Idade: ");
        scanf("%i", &lista[i].idade);
        fflush(stdin);

        printf("Peso: ");
        scanf("%f", &lista[i].peso);
        fflush(stdin);
    }
    system("cls");

    printf("--------Dados de seus clientes--------");
    for(i=0;i<TAM;i++) {
        printf("\n\n%iª pessoa", i+1);
        printf("\nNome: %s", lista[i].nome);
        printf("\nIdade: %i anos", lista[i].idade);
        printf("\nPeso: %2.fKg", lista[i].peso);
    }

}
