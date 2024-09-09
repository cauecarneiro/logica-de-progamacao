#include <stdio.h>
#include <locale.h>
int main(){
setlocale(0,"Portuguese");
int vetor[20], i, soma=0;

for(i=0;i<20;i++){
	printf("Insira um valor para o vetor v[%i]: ", i);
	scanf("%i", &vetor[i]);
	fflush(stdin);

	soma+=vetor[i];
}

int media = soma/20;
printf("\nMédia dos elementos do vetore: %i", media);
for(int varredura=0; varredura<20; varredura++){

	for(i=0;i<19;i++){
		if(vetor[i]>vetor[i+1]){
			int aux = vetor [i];
			vetor[i]=vetor[i+1];
			vetor[i+1]=aux;

		}
	}
}

printf("\nVetor em ordem decrescente: ");
for(i=0;i<20;i++){
	printf("%d ", vetor[i]);
}
int QntImpares = 0;
for(i=0;i<20;i++){
	if((vetor[i]%2)==1){
		QntImpares++;
	}
}
	printf("\nQuantidade impares: %d", QntImpares);
}

