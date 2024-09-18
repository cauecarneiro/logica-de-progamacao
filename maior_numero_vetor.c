/*#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(0,"Portuguese");
	int v[10], i;
	
	for(i=1;i<11;i++){
		printf("Número %i: ", i);
		scanf("%i", &v[i]);
	}
	
}*/

//inclusão de bibliotecas.
#include <stdio.h>
#include <stdlib.h>
#define MAX 10 //tamanho do vetor, caso queira comparar mais numero altere o valor.
//------------------------------------------------------------------------------

void vetor()//função sem parametro e sem retorno.
{
int vet[3];
int menor=10000;
int cont;

for(cont=0;cont<MAX;cont++)
{
printf("\nInforme o %d%c valor: ",cont+1,167);//solicita o valor pro usuario.
scanf("%d",&vet[cont]);
if(vet[cont]<menor)//compara os valores.
menor=vet[cont];
}

printf("\nO menor: %d", menor);//exibe o menor valor.
}
//------------------------------------------------------------------------------
main()//função principal.
{
vetor();
getch();//pausa o programa.

//fim do programa.
}
