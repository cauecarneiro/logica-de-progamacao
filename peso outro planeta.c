#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(0,"Portuguese");
    int kg;
    int pl;
    printf(" Seu peso na terra (Kg) = ");
    scanf("%f", &kg);
    printf("\n\t ESCOLHA UM PLANETA\t");
    printf("\n\t====================");
    printf("\n\t1\tMerc�rio\n\t2\tV�nus\n\t3\tMarte");
    printf("\n\t4\tJ�pter\n\t5\tSaturno\n\t6\tUrano");
    printf("\n\t====================");
    printf("\tDigite sua op��o => ");
    switch (kg) {
    case 1:
        int kg1 = kg*0,37;
        printf("No planeta MERC�RIO, seu peso seria %i", kg1);

    case 2:
        int kg2 = kg*0,88;
        printf("No planeta V�NUS, seu peso seria %i", kg2);

    case 3:
        int kg3 = kg*0,38;
        printf("No planeta MARTE, seu peso seria %i", kg3);

    case 4:
        int kg4 = kg*2,64;
        printf("No planeta J�PTER, seu peso seria %i", kg4);

    case 5:
        int kg5 = kg*1,15;
        printf("No planeta SATURNO, seu seria %i", kg5);

    case 6:
        int kg6 = kg*1,17;
        printf("No planeta URANO, seu peso seria %i", kg6);












    }












}
