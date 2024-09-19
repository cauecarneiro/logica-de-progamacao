#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(0,"Portuguese");
	
	char s1[100], s2[100], s3[100], result[100];
	
	printf("Escreva a primeira string: ");
	gets(s1);
	fflush(stdin);
	
	printf("Escreva a segunda string: ");
	gets(s2);
	fflush(stdin);
	
	printf("Escreva a terceira string: ");
	gets(s3);
	fflush(stdin);
	
	int tam1 = strlen(s1);
	int tam2 = strlen(s2);
	int comp = strcmp(s1,s2);
	
	printf("\n%s tem %d palavras", s1, tam1);
	printf("\n%s tem %d palavras", s2, tam2);
	
	if(comp == 0){
		printf("\nCopiando o valor da terceira string para a segunda: string 2=%s", strcpy(s2,s3));
	} else {
		strcpy(result, s1);
		strcat(result, s2);
		strcat(result, s3);
		printf("\nConcatenando as strings %s ", result);
	}
}
