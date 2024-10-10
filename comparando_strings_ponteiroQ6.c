#include <stdio.h>

#define TAM 100

int contemSubstring(const char *s1, const char *s2) {
    if (*s2 == '\0') {
        return 1;
    }

    while (*s1 != '\0') {
        const char *inicio = s1;
        const char *sub = s2;

        while (*inicio != '\0' && *sub != '\0' && *inicio == *sub) {
            inicio++;
            sub++;
        }

        if (*sub == '\0') {
            return 1;
        }

        s1++;
    }

    return 0;
}

int main() {
    char s1[TAM];
    char s2[TAM];

    printf("Digite a primeira string: ");
    fgets(s1, TAM, stdin);
    
    printf("Digite a segunda string: ");
    fgets(s2, TAM, stdin);

    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    if (contemSubstring(s1, s2)) {
        printf("A substring \"%s\" existe em \"%s\".\n", s2, s1);
    } else {
        printf("A substring \"%s\" não existe em \"%s\".\n", s2, s1);
    }

    return 0;
}
