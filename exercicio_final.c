#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	
	int n, nrand, i, cont = 0; //inicializando as var�aveis;
	
	
	srand(time(NULL)); //implementando a "semente" para receber o hor�rio do computador e gerar um n�mero aleat�rio
	

	nrand = rand() % 100 + 1; //alocando um n�mero aleat�rio para a vari�vel nrand
	printf("%d ", nrand);
	

	printf("Digite um n�mero entre 0 e 100\n\n"); //pedindo a incer��o via teclado para a vari�vel n
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	
	for(i=0;i<10;i++){ //iniciando o la�o de repeti��o
		
		if(n<nrand){ //verificando se n � menor que nrand
			printf("Digite um n�mero maior: ");
			scanf("%d", &n);
		}else if(n>nrand){ //verificando se n � maior que nrand
			printf("Digite um n�mero menor: ");
			scanf("%d", &n);
		}else if(n==nrand){ //verificando se n � igual que nrand
			printf("Parab�ns, vc acertou em %d tentativas", i+1);
			i = 10;
		}else{
			printf("Vc fracassou");
		}
		
	}
}
