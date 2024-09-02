#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    setlocale(0,"Portuguese");
    float n1, n2, res;
    char op;
    printf("==== CALCULADORA ====");
    printf("\n\nDigite + para soma\nDigite - para subtrair\nDigite * para multiplicar\nDigite / para divisão\n\nDigite aqui: ");
    scanf("%c", &op);


    switch(op) {

    	case '+':
    		printf("\nDigite o primeiro valor: ");
    		scanf("%f", &n1);
    		printf("Digite o segundo valor: ");
    		scanf("%f", &n2);
        res = n1 + n2;
        printf("\nSoma: %.1f", res);
        break;

    	case '-':
    		printf("\nDigite o primeiro valor: ");
    		scanf("%f", &n1);
    		printf("Digite o segundo valor: ");
    		scanf("%f", &n2);
        res = n1 - n2;
        printf("\nSubtração: %.1f", res);
		break;

    	case '*':
    		printf("\nDigite o primeiro valor: ");
    		scanf("%f", &n1);
    		printf("Digite o segundo valor: ");
    		scanf("%f", &n2);
        res = n1 * n2;
        printf("\nMultiplicação: %1.f", res);
    	break;

    	case '/':
    		printf("\nDigite o primeiro valor: ");
    		scanf("%f", &n1);
    		printf("Digite o segundo valor: ");
    		scanf("%f", &n2);
        res = n1 / n2;
        printf("\nDivisão: %1.f", res);
        break;

        default: printf("\nOperação não encontrada, Digite + - * / \n\n");
    }


    return 0;
}

