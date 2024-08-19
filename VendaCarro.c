#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(0,"Portuguese");
    float custoF, percDist, imp, valorF;
    printf("Insira o custo de fábrica do carro: ");
    scanf("%f", &custoF);
    percDist = custoF*28/100;
    imp = custoF*45/100;
    valorF = custoF + percDist + imp;
    printf("\n\n\tCom  o percentual do distribuidor de 28%% e Impostos equivalentes a 45%% o valor final ao consumidor: R$%0.f\n\n\n\n", valorF);

}
