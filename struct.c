#include <stdio.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Criando e inicializando
    tipo_pessoa pes = {0, 0.0, "Teste"};

    printf("In�cio-\n");
    printf("Idade: %i",pes.idade);
    printf("\nPeso: %.2f", pes.nome);
    printf("\nNome: %s", pes.nome);

    //atribuindo valores aos campos

    pes.idade = 33;
    pes.peso = 70.67;
    strcpy(pes.nome, "Jo�o");

    printf("\n\nIn�cio-\n");
    printf("Idade: %i",pes.idade);
    printf("\nPeso: %.2f", pes.peso);
    printf("\nNome: %s", pes.nome);


    //solicitando incer��o via teclado

    printf("\n\nIn�cio-\n");
    printf("Idade: ");
    scanf("%i", &pes.idade);
    printf("Peso: ");
    scanf("%f", &pes.peso);
    printf("Nome: ");
    scanf("%s", &pes.nome);
}
