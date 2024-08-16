#include <stdio.h>
#include <locale.h>
int main () {
    setlocale(0,"Portuguese");
    int n;
        printf("Digite um número: ");
        scanf("%i", &n);

        switch(n){
            case 1:
                printf("Domingo");
                break;

            case 2:
                printf("Segunda");
                break;

            case 3:
                printf("Terça");
                break;

            case 4:
                printf("Quarta");
                break;

            case 5:
                printf("Quinta");
                break;

            case 6:
                printf("Sexta");
                break;

            case 7:
                printf("Sábado");
                break;

            default:
                printf("A semana tem 7 dias, năo %i", n);
                break;
                }
            }
