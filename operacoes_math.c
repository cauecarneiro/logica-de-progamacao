#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int cubo(int n);
int quadrado(int n);
int raiz_cubica(int n);
int raiz_quadrada(int n);

int main(){
	setlocale(0,"Portuguese");
	int num, e_quad, e_cubo, r_quad, raiz_cub;
	
	printf("Digite um valor inteiro positivo: ");
	scanf("%d", &num);
	
	printf("%d Elevado ao quadrado: %d",num, quadrado(num));
	printf("\n%d Elevado ao cubo: %d", num, cubo(num));
	printf("\nRaiz Quadrada de %d: %d", num, raiz_quadrada(num));
	printf("\nRaiz Cúbica de %d: %d", num, raiz_cubica(num));
	
	return 0;
}

int cubo(int n){
	int cubo;
	cubo = pow(n,3);
	return cubo;
}

int quadrado(int n){
	int quadrado;
	quadrado = pow(n,2);
	return quadrado;
}

int raiz_cubica(int n){
	int raiz_cub;
	raiz_cub = cbrt(n);
	return raiz_cub;
}

raiz_quadrada(int n){
	int raiz_quad;
	raiz_quad = sqrt(n);
	return raiz_quad;
}
