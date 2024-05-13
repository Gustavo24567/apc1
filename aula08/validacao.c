#include <stdio.h>

int main(){

  int numero;
  int numero_eh_valido = 0;

  while(numero_eh_valido == 0){
    printf("entre com um numero \n");
    int deu_certo = scanf("%i", &numero);

    numero_eh_valido = deu_certo && numero >=1 && numero <= 10;


    if(numero_eh_valido == 0){
      printf("entrada invalida \n");
      getchar();
    }
  }
  printf("o numero %i é valido \n", numero);
  
  return 0;
}