/*Ex 1*/

/*#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[]) {
    setlocale(0,"Portuguese");
    int n1,n2,n3,n4,s;
    printf("Digita quantro n�meros:\n");
    scanf("%i", &n1);
    scanf("%i", &n2);
    scanf("%i", &n3);
    scanf("%i", &n4);
    s = n1+n2+n3+n4;
    printf("O resultado de %i+%i+%i+%i=%i",n1,n2,n3,n4,s);


    return 0;
}*/

/*Ex 2*/

/*#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
    setlocale(0,"Portuguese");
    float sal, per, aum, nsal;
    printf("Insira o sal�rio: ");
    scanf("%f", &sal);
    printf("Insira o percentual de aumento: ");
    scanf("%f", &per);
    aum= sal*per/100;
    printf("Valor do aumento: %.0  f", aum);
    nsal=sal+aum;
    printf("\nNovo sal�rio: %.0f", nsal);

    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[]){
       int seg, min ,hr;
       printf("Insira o tempo em segundos: ");
       scanf("%i", &seg);
       hr = seg / 3600;
       printf("Horas: %i", hr);
       min = seg % 60;
       printf("\nMinutos: %i", min);
       seg = seg /  seg;
       printf("\nSegundos: %i", seg);


       return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]){
    setlocale(0,"Portuguese");
    int n1,n2;
    printf("---- Me diga dois n�meros que eu direi qual � o maior entre eles ----");
    printf("\n\nPrimeiro n�mero: ");
    scanf("%i", &n1);
    printf("\nSegundo n�mero: ");
    scanf("%i", &n2);
    if (n1>n2){
        printf("\nO maior n�mero � %i", n1);
    } else if (n2>n1) {
        printf("\nO maior n�mero � %i", n2);

    } else {
        printf("\nOs dois s�o iguais");
    }

return 0;
}*/

/*#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    setlocale(0,"Portuguese");
    float n1, n2, res;
    int op;
    printf("==== CALCULADORA ====");
    printf("\n\nDigite 1 para soma\nDigite 2 para subtrair\nDigite 3 para multiplicar\nDigite 4 para divis�o\n");
    scanf("%i", &op);
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);

    if(op == 1){
        res = n1 + n2;
        printf("Soma: %.1f", res);
    }

    if(op == 2){
        res = n1 - n2;
        printf("Subtra��o: %.1f", res);
    }

    if(op == 3){
        res = n1 * n2;
        printf("Multiplica��o: %1.f", res);
    }

    if(op == 4){
        res = n1 / n2;
        printf("Divis�o: %1.f", res);
    }


    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]){
    setlocale(0,"Portuguese");
    float nt,na,ne, mp;

    printf("Insira a nota do trabalho: ");
    scanf("%f", &nt);
    printf("Insira a nota da avalia��o: ");
    scanf("%f", &na);
    printf("Insira a nota do exame: ");
    scanf("%f", &ne);
    mp = (nt*2 + na*3 +ne*5) / 10;
    printf("M�dia ponderada: %1.f", mp);

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
}*/

/*#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    setlocale(0,"Portuguese");
    int soma, i;
    soma = 0;

    for (i=0;i<=10;i++){
        soma = soma + i;
    }
    printf("Soma: %d", soma);

    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
    setlocale(0,"Portuguese");
    int i, ant1 = 0, ant2 = 1, atual;

    printf("S�rie de Fibonacci: ");
    printf("%d ", ant1);


    for (i=3; i<=8; i++){
    atual = ant1 + ant2;
    printf("%d ", atual);
    ant2 = ant1;
    ant1 = atual;
    }

    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int agrc, char *agrv[]){
    setlocale(0,"Portuguese");
    int i, res, j;

    printf("Digite o n�mero de qual voc� quer receber a tabuada: ");
    scanf("%d", &j);

        for(i=1; i<=10; i++){
        res = j * i;
        printf("%i x %i = %i\n", j, i, res);
    }

    return 0;
}*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float calcLucroDist(float p_fab, float por_dist){
    return p_fab * por_dist / 100;
}

float calcImp(float p_fab, float por_imp){
    return p_fab * por_imp / 100;
}

float calcPre�oF(float p_fab, float v_dist, float v_imp){
    return p_fab + v_dist + v_imp;
}

int main (int argc, char *argv[]){
    setlocale(0,"Portuguese");

    float pre�of, porcdist, porcimp, lucrodist, imp, vlrf;

    printf("Insira o pre�o de f�brica: \n");
    scanf("%f", &pre�of);
    printf("Insira o percentual de lucro do distribuidor: \n");
    scanf("%f", &porcdist);
    printf("Insira o percentual do imoposto: \n");
    scanf("%f", &porcimp);

    lucrodist = calcLucroDist(pre�of, porcdist);
    imp = calcImp(pre�of, porcimp);
    vlrf = calcPre�oF(pre�of, lucrodist, imp);

    printf("Lucro do distribuidor: R$%2.f\n", lucrodist);
    printf("Impostos: %1.f\n", imp);
    printf("Valor final: %1.f\n", vlrf);
    return 0;
}
