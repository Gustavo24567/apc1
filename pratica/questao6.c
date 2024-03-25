#include <stdio.h>
#include <math.h>

int main(){

  float A;
  float B;
  float C;
  float delta;
  double raiz;
  float resultado1;
  float resultado2;

  printf("entre com o valor de A: ");
  int deu_certo = scanf("%f", &A);

  printf("entre com o valor de B: ");
  deu_certo = scanf("%f", &B);
  
  printf("entre com o valor de C: ");
  deu_certo = scanf("%f", &C);

  delta = (B*B) - (4*A*C);

  raiz = sqrt(delta);

  printf("o valor de delta é %f\n", delta);
  printf("o valor da raiz é %f\n", raiz);

  resultado1 = (-B + raiz) / (2*A);
  printf("o valor é %f\n", resultado1);

  resultado2 = (-B - raiz) / (2*A);
  printf("o valor é %f\n", resultado2);

  










  return 0;
}