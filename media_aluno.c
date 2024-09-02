#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(0,"Portuguese");
    float n1,n2,n3,md;

    printf("Nota N1: ");
    scanf("%f", &n1);

    printf("Nota N2: ");
    scanf("%f", &n2);

    printf("Nota N3: ");
    scanf("%f", &n3);

    md = (n1 * 2) + (n2 * 3) + (n3 * 5) / 10;

    printf("\nMédia final = %0.f", md);
}
