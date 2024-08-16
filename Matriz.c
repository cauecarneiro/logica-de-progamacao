/*#include <stdio.h>
#include <locale.h>
int main(){
setlocale(0,"Portuguese");
    int mat[3][3];

    mat[0][0] = 1;
    mat[0][1] = 2;
    mat[0][2] = 3;

    mat[1][0] = 4;
    mat[1][1] = 5;
    mat[1][2] = 6;

    mat[2][0] = 7;
    mat[2][1] = 8;
    mat[2][2] = 9;

    printf("Imprimindo a primeira linha:\n");
    printf("%i %i %i", mat[0][0], mat[0][1], mat[0][2]);
}*/

/*#include <stdio.h>
#include <locale.h>
int main(){
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int j,i;

    printf("Primeira linha: ");
    for(j=0;j<3;j++){
        printf("%d ", mat[0][j]);
    }

    printf("\n\nSegunda linha: ");
    for(j=0;j<3;j++){
        printf("%i ", mat[1][j]);
    }
}*/

#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(0,"Portuguese");
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j;

    printf("Imprimindo a matriz toda:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%i ", mat[i][j]);
        }
    }

}

