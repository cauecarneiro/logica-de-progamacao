#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	
	int n, nrand, i, cont = 0; //inicializando as varíaveis;
	
	
	srand(time(NULL)); //implementando a "semente" para receber o horário do computador e gerar um número aleatório
	

	nrand = rand() % 100 + 1; //alocando um número aleatório para a variável nrand
	printf("%d ", nrand);
	

	printf("Digite um número entre 0 e 100\n\n"); //pedindo a incerção via teclado para a variável n
	printf("Digite um número: ");
	scanf("%d", &n);
	
	
	for(i=0;i<10;i++){ //iniciando o laço de repetição
		
		if(n<nrand){ //verificando se n é menor que nrand
			printf("Digite um número maior: ");
			scanf("%d", &n);
		}else if(n>nrand){ //verificando se n é maior que nrand
			printf("Digite um número menor: ");
			scanf("%d", &n);
		}else if(n==nrand){ //verificando se n é igual que nrand
			printf("Parabéns, vc acertou em %d tentativas", i+1);
			i = 10;
		}else{
			printf("Vc fracassou");
		}
		
	}
}
