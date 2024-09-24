#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int letra(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int palindromo(char st[]) {
    int i = 0, j = strlen(st) - 1;

    while (i < j && !letra(st[i])) i++;
    while (j > i && !letra(st[j])) j--;

    while (i < j) {
        if (st[i] != st[j] && st[i] != st[j] + 32 && st[i] != st[j] - 32) {
            return 0;
        }
        i++;
        j--;
    }

    return 1;
}

int main() {
	setlocale(0,"");
    char palavra[100];

    printf("Digite uma palavra: ");
    fgets(palavra, 100, stdin);

    if (palindromo(palavra)) {
        printf("\n%s É um palindromo\n", palavra);
    } else {
        printf("\n%s Nao eh um palindromo\n", palavra);
    }

    return 0;
}
