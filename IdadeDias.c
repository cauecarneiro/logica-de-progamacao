#include <stdio.h>

int main() {
    int anos, meses, dias, idias;

    printf("Digite a idade em anos: ");
    scanf("%d", &anos);
    printf("Digite a idade em meses: ");
    scanf("%d", &meses);
    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    idias = (anos * 365) + (meses * 30) + dias;

    printf("A idade total em dias e: %d\n", idias);

}
