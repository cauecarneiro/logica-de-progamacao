#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    setlocale(0,"Portuguese");
    float n1, n2, res;
    int op;
    printf("==== CALCULADORA ====");
    printf("\n\nDigite 1 para soma\nDigite 2 para subtrair\nDigite 3 para multiplicar\nDigite 4 para divis�o\n");
    scanf("%i", &op);
    

    switch(op) {
    	
    	case 1:
    		printf("Digite o primeiro valor: ");
    		scanf("%f", &n1);
    		printf("Digite o segundo valor: ");
    		scanf("%f", &n2);
        res = n1 + n2;
        printf("Soma: %.1f", res);
        break;

    	case 2:
    		printf("Digite o primeiro valor: ");
    		scanf("%f", &n1);
    		printf("Digite o segundo valor: ");
    		scanf("%f", &n2);
        res = n1 - n2;
        printf("Subtra��o: %.1f", res);
		break;

    	case 3:
    		printf("Digite o primeiro valor: ");
    		scanf("%f", &n1);
    		printf("Digite o segundo valor: ");
    		scanf("%f", &n2);
        res = n1 * n2;
        printf("Multiplica��o: %1.f", res);
    	break;
	
    	case 4:
    		printf("Digite o primeiro valor: ");
    		scanf("%f", &n1);
    		printf("Digite o segundo valor: ");
    		scanf("%f", &n2);
        res = n1 / n2;
        printf("Divis�o: %1.f", res);
        break;
        
        default: printf("Digite um n�mero entre 1 e 4");
    }


    return 0;
}
