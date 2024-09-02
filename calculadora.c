#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    setlocale(0,"Portuguese");
    float n1, n2, res;
    int op;
    printf("==== CALCULADORA ====");
    printf("\n\nDigite 1 para soma\nDigite 2 para subtrair\nDigite 3 para multiplicar\nDigite 4 para divisão\n");
    scanf("%i", &op);
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);

    if(op == 1){
        res = n1 + n2;
        printf("Soma: %.1f", res);
    }

    if(op == 2){
        res = n1 - n2;
        printf("Subtração: %.1f", res);
    }

    if(op == 3){
        res = n1 * n2;
        printf("Multiplicação: %1.f", res);
    }

    if(op == 4){
        res = n1 / n2;
        printf("Divisão: %1.f", res);
    }


    return 0;
}
