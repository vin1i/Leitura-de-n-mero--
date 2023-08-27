#include <stdio.h>
int soma(int x, int y){
  return (x+y);
}

  int main (void){
    int a, b,  resultado;
    printf("Informe os dois numeros\n");
    scanf("%d", &a);
    scanf("%d", &b);
    resultado = soma(a,b);

    printf("O resultado e %d", resultado);
    return 0;
  
  }
