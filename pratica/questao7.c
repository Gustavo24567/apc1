#include <stdio.h>
#include <math.h>

int main(){
  float altura;
  float distancia;
  float seno;

  printf("entre com o valor da distancia: ");
  int deu_certo = scanf("%f", &distancia);

  printf("entre com o valor do angulo: ");
  deu_certo = scanf("%f", &altura);

  seno = sin(altura);
  float altura_final = distancia * seno;
  printf("a altura final é %f\n", altura_final);
  
  
  







  return 0;
}