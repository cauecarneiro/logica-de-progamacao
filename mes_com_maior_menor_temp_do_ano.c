#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(0,"Portuguese");
	float mes[12], menor = 99, maior = 0;
	int i, imenor, imaior;
	
	for(i=1;i<=12;i++){
		printf("Temp m�dia do %d� m�s: ", i);
		scanf("%f", &mes[i]);
	}
	
	for(i=1;i<=12;i++){
		if(menor>mes[i]){
			menor=mes[i];
			imenor = i;
		}
		
		if(maior<mes[i]){
			maior=mes[i];
			imaior = i;
		}
	}


	switch (imaior){
				case 1:
					printf("\nO m�s com maior temperatura foi o de Janeiro com %.2f graus", maior);
					break;
				case 2:
					printf("\nO m�s com maior temperatura foi o de Fevereiro com %.2f graus", maior);
					break;
				case 3:
					printf("\nO m�s com maior temperatura foi o de Mar�o com %.2f graus", maior);
					break;
				case 4:
					printf("\nO m�s com maior temperatura foi o de Abril com %.2f graus", maior);
					break;
				case 5:
					printf("\nO m�s com maior temperatura foi o de Maio com %.2f graus", maior);
					break;
				case 6:
					printf("\nO m�s com maior temperatura foi o de Junho com %.2f graus", maior);
					break;
				case 7:
					printf("\nO m�s com maior temperatura foi o de Julho com %.2f graus", maior);
					break;
				case 8:
					printf("\nO m�s com maior temperatura foi o de Agosto com %.2f graus", maior);
					break;
				case 9:
					printf("\nO m�s com maior temperatura foi o de Setembro com %.2f graus", maior);
					break;
				case 10:
					printf("\nO m�s com maior temperatura foi o de Outubro com %.2f graus", maior);
					break;
				case 11:
					printf("\nO m�s com maior temperatura foi o de Novembro com %.2f graus", maior);
					break;
				case 12:
					printf("\nO m�s com maior temperatura foi o de Dezembro com %.2f graus", maior);
					break;
		}
		
		switch (imenor){
				case 1:
					printf("\nO m�s com maior temperatura foi o de Janeiro com %.2f graus", menor);
					break;
				case 2:
					printf("\nO m�s com menor temperatura foi o de Fevereiro com %.2f graus", menor);
					break;
				case 3:
					printf("\nO m�s com menor temperatura foi o de Mar�o com %.2f graus", menor);
					break;
				case 4:
					printf("\nO m�s com menor temperatura foi o de Abril com %.2f graus", menor);
					break;
				case 5:
					printf("\nO m�s com menor temperatura foi o de Maio com %.2f graus", menor);
					break;
				case 6:
					printf("\nO m�s com menor temperatura foi o de Junho com %.2f graus", menor);
					break;
				case 7:
					printf("\nO m�s com menor temperatura foi o de Julho com %.2f graus", menor);
					break;
				case 8:
					printf("\nO m�s com menor temperatura foi o de Agosto com %.2f graus", menor);
					break;
				case 9:
					printf("\nO m�s com menor temperatura foi o de Setembro com %.2f graus", menor);
					break;
				case 10:
					printf("\nO m�s com menor temperatura foi o de Outubro com %.2f graus", menor);
					break;
				case 11:
					printf("\nO m�s com menor temperatura foi o de Novembro com %.2f graus", menor);
					break;
				case 12:
					printf("\nO m�s com menor temperatura foi o de Dezembro com %.2f graus", menor);
					break;
		}
}

