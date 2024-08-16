#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]){
    setlocale(0,"Portuguese");
    float nt,na,ne, mp;

    printf("Insira a nota do trabalho: ");
    scanf("%f", &nt);
    printf("Insira a nota da avaliação: ");
    scanf("%f", &na);
    printf("Insira a nota do exame: ");
    scanf("%f", &ne);
    mp = (nt*2 + na*3 +ne*5) / 10;
    printf("Média ponderada: %1.f", mp);

    if (mp>=8){
        printf("\nConceito: A");
    }

    if (mp>=7 && mp<8) {
        printf("\nConceito: B");
    }

    if (mp>=6 && mp<7) {
        printf("\nConceito: C");
    }

    if (mp>=5 && mp<6) {
        printf("\nConceito: D");
    }

    if (mp>=0 && mp<5) {
        printf("\nConceito: E");
    }


    return 0;
}
