#include <stdio.h>

void verificarNumero(int numero) {
    if (numero < 0) {
        printf("O numero %d e negativo.\n", numero);
    } else if (numero > 0) {
        printf("O numero %d e positivo.\n", numero);
    } else {
        printf("O numero e zero.\n");
    }
}

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    verificarNumero(num);

    return 0;
}
