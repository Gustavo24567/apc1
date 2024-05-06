#include <stdio.h>
#include <math.h>

int main(){
  int numero;

  printf("entre com um numero emtre 1 e 100 \n");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo && numero > 0 && numero < 101){
    printf("os multiplos de %i entre 1 e 100 são: \n", numero);
    for (int i = 1; i <= 100; i++){
      if (i % numero == 0){
        printf("%i \n", i);
      }
    }
    printf("\n");
  } else {
    printf("entrada invalida \n");
  }

  




  return 0;
}