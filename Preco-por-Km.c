#include <stdio.h>
#include <locale.h>
#include <time.h>
void main () {
setlocale(0,"Portuguese");
    float d;
    printf("======= TABELA DE PREÇOS =======");
    printf("\nViajens até 200 Km\tR$0.50/Km");
    printf("\nA partir de 200 Km\tR$0.35/Km");
    printf("\n----------------------------------\nDistância total da viajem, em Km: ");
    scanf("%f", &d);
    if(d>200) {
        float d1 = d*0.35;
        printf("Uma viajem de %.1fKm vai custar R$0,35/Km.", d);
        printf("\nValor total R$%2.f", d1);
    } else{
        float d2 = d*0.50;
        printf("Uma viajem de %1.fKm vai custar R$0,50/Km", d);
        printf("\nValor total R$%2.f", d2);
    }
}

