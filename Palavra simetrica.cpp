#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int i, j, simetrica = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    j = strlen(palavra) - 1;

    for (i = 0; i < j; i++, j--) {
        if (palavra[i] != palavra[j]) {
            simetrica = 0;
            break;
        }
    }

    if (simetrica) {
        printf("A palavra \"%s\" e simetrica.\n", palavra);
    } else {
        printf("A palavra \"%s\" nao e simetrica.\n", palavra);
    }

    return 0;
}


