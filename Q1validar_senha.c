#include <stdio.h>
#include <string.h>

int senha_valida(char senha[]) {
    int numero = 0, maiuscula = 0, minuscula = 0;
    int tam = strlen(senha);

    if (tam < 8 || tam > 100) {
        return 0;
    }

    for (int i = 0; i < tam; i++) {
        if (senha[i] >= '0' && senha[i] <= '9') numero = 1;
        if (senha[i] >= 'A' && senha[i] <= 'Z') maiuscula = 1;
        if (senha[i] >= 'a' && senha[i] <= 'z') minuscula = 1;
    }

    return numero && maiuscula && minuscula;
}

int main() {
    setlocale(0,"");
    char senha[101];

    printf("Digite sua senha: ");
    scanf("%s", senha);

    if (senha_valida(senha)) {
        printf("Senha válida.\n");
    } else {
        printf("Senha inválida.\n");
        printf("A senha tem que ter entre 8 e 6 digitos, com uma letra minuscula e outra maiuscula e pelo menos um número.");
    }

    return 0;
}
