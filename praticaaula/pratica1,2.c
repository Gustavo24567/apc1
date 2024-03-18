#include <stdio.h>

int main(){
  float r;
  float pi = 3.1416;

  printf("indique o raio do circulo: ");
  int deu_certo = scanf("%f", &r);

  float perimetro = pi * r * 2;

  printf("o perimetro do circulo eh %f\n", perimetro);





  return 0;
}