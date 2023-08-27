#include <stdio.h>
#include <math.h>
#define a 3
#define b 5
#define c 4
#define d 7
#define k1 12
#define k2 9

int main (void){
  int i, j;
  
  float S[2][2] = {{a,b}, {c,d}},
  Ax[2][2] = {{k1,b},{k2,d}}, 
  Ay[2][2] = {{a,k1},{c,k2}},
  detAx = ((k1*d)-(k2*b)),
  detAy = ((k2*a)-(k1*c)), 
  detS = ((a*d)-(b*c)), y, x;
  x = detAx/detS;
  y = detAy/detS;
  
  printf("A solução do sistema e\nx=%f\ny=%f", x,y);
  return 0;
}
