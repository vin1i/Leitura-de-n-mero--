#include <stdio.h>
#include <math.h>

#define a 3
#define b 5
#define c 4
#define d 7
#define k1 12
#define k2 9

int main(void) {
    float S[2][2] = {{a, b}, {c, d}};
    float Ax[2][2] = {{k1, b}, {k2, d}};
    float Ay[2][2] = {{a, k1}, {c, k2}};

    float detAx = (k1 * d) - (k2 * b);
    float detAy = (k2 * a) - (k1 * c);
    float detS = (a * d) - (b * c);

    float x = detAx / detS;
    float y = detAy / detS;

    printf("A solucao do sistema �:\nx = %f\ny = %f\n", x, y);

    return 0;
}
