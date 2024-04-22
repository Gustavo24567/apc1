#include <stdio.h>
#include <math.h>

int main(){

  int numero;

  printf("entre com um numero \n");
  int deu_certo = scanf("%i", &numero);

  if( deu_certo) {
    if (numero % 2 == 0){
    printf("o numero %i é par \n", numero);
  } else {
    printf("o numero %i é impar \n", numero);
  } 
  } else {
    printf("entrada invalida \n");
  }






  return 0;
}