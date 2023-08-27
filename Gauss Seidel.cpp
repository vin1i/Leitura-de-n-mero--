#include <stdio.h>
#include <math.h>

#define MAX_ITERACOES 100
#define LIMIAR_ERRO 0.0001

void gaussSeidel(float S[4][4], float b[4], float x[4]) {
    int i, j, k;
    float soma;

    for (k = 0; k < MAX_ITERACOES; k++) {
        for (i = 0; i < 4; i++) {
            soma = 0.0;

            // Calcula a soma dos elementos da linha atual, exceto o elemento diagonal
            for (j = 0; j < 4; j++) {
                if (j != i) {
                    soma += S[i][j] * x[j];
                }
            }

            // Atualiza a estimativa para a variável atual usando a fórmula de Gauss-Seidel
            x[i] = (b[i] - soma) / S[i][i];
        }

        // Verifica o critério de parada
        float erro = 0.0;
        for (i = 0; i < 4; i++) {
            erro += fabs(x[i] - b[i]);
        }
        if (erro < LIMIAR_ERRO) {
            break;  // Sai do loop se o critério de parada for atingido
        }
    }
}

int main(void) {
    float S[4][4];
    float b[4];
    float x[4];
    int i, j;

    // Entrada dos coeficientes da matriz de coeficientes
    printf("Digite os coeficientes da matriz de \ncoeficientes:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%f", &S[i][j]);
        }
    }

    // Entrada dos termos independentes
    printf("Digite os termos independentes:\n");
    for (i = 0; i < 4; i++) {
        scanf("%f", &b[i]);
    }

    // Entrada da estimativa inicial
    printf("Digite a estimativa inicial:\n");
    for (i = 0; i < 4; i++) {
        scanf("%f", &x[i]);
    }

    // Chamada da função gaussSeidel para resolver o sistema
    gaussSeidel(S, b, x);

    // Impressão da solução
    printf("A solucao do sistema e:\n");
    printf("x = %.2f\ny = %.2f\nz = %.2f\nw = %.2f\n", x[0], x[1], x[2], x[3]);

    return 0;
}


