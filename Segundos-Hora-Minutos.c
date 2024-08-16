#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[]){
       int seg, min ,hr;
       printf("Insira o tempo em segundos: ");
       scanf("%i", &seg);
       hr = seg / 3600;
       printf("Horas: %i", hr);
       min = seg / 60;
       printf("\nMinutos: %i", min);
       return 0;
}
