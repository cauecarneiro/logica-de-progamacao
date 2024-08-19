#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(0,"Portuguese");
    int votoB, votoN, votoV, total, porcB, porcN, porcV;
    printf("Total de votos brancos: ");
    scanf("%i", &votoB);
    printf("Total de votos nulos: ");
    scanf("%i", &votoN);
    printf("Total de votos válidos: ");
    scanf("%i", &votoV);
    total = votoB + votoN + votoV;
    printf("Total: %i", total);
    system("cls");
    porcB = votoB*total/100;
    printf("\nPorcentagem de Brancos: %i%%", porcB);

    porcN = votoN*total/100;
    printf("\nPorcentagem de Nulos: %i%%", porcN);

    porcV = votoV*total/100;
    printf("\nPorcentagem de Válidos: %i%%", porcV);
}
