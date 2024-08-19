#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(0,"Portuguese");
    float NumCarros, ValVendas, SalFixo, ValCarroV, SalFinal;
    printf("Número de carros vendidos: ");
    scanf("%f", &NumCarros);
    printf("Valor total das vendas: ");
    scanf("%f", &ValVendas);
    printf("Salário Fixo: ");
    scanf("%f", &SalFixo);
    printf("Valor a receber por carro vendido: ");
    scanf("%f", &ValCarroV);

    SalFinal = SalFixo + (ValCarroV * NumCarros) + (0.05 * ValVendas);
    printf("\nR$%.2f", SalFinal);
}
