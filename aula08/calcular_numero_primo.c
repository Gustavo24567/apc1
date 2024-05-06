#include <stdio.h>
#include <math.h>

int main(){
  int numero;
  int qtde_multiplo = 0;

  
  printf("entre com um numero inteiro: \n");
  int deu_certo = scanf("%i", &numero);

   if (deu_certo && numero > 0){
     for(int i =1; i <= numero; i++){
       if(numero % i == 0){
         qtde_multiplo++;
       }
     }  
    if (qtde_multiplo == 2){
      printf("o numero %i é primo \n", numero);
  } else {
      printf("o numero %i não é primo \n", numero);
  }
   }else{
      printf("entrada invalida \n");
  }
  








  return 0;
}