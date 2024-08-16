#include <stdio.h>
#include <locale.h>
int main()
{
    float n1,n2,n3,ppd,ex;
    char eu;
    setlocale(0,"Portuguese");
    printf("\tNota N1: ");
    scanf("%f", &n1);
    printf("\tNota N2: ");
    scanf("%f", &n2);
    printf("\tNota PPD: ");
    scanf("%f", &ppd);
    printf("\tVocê fez o Exame Unificado? S/N: ");
    scanf("%s", &eu);
    if(eu == 'S')
    {
        printf("\tNota Exame Unificado: ");
        scanf("%f", &ex);
        system("cls");
    }
    else
    {
        ex = 0;
        printf("\tVocê deixou de ganhar ponto extra do Exame Unificado");
    }
    float nf = n1+n2+ppd+ex;
    printf("\n\tSua nota final: %1.f", nf);
    if(nf<7)
    {
        char fn3;
        printf("\n\n\tVocê não alcançou a nota para passar de semestre!\n\n\tVocê fez a N3? S/N: ");
        scanf("%s", &fn3);
        if(fn3 == 'S')
        {
            printf("\n\tNota N3: ");
            scanf("%f", &n3);
            float notafinal = n1+n2+n3+ppd+ex;
            printf("\tNota final: %.1f", notafinal);
            printf("\n\tVocê esta aprovado!");
        }
        else
        {
            system("cls");
            printf("\n\tVocê reprovou!");
        }
    }
    else
    {
         system("cls");
        float notafinal = n1+n2+n3+ppd+ex;
        printf("\tNota final: %.1f", notafinal);
        printf("\n\tVocê esta aprovado!");
    }
}
