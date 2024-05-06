#include <stdio.h>
#include <math.h>

int main(){
  int quantidade;

  printf("entre com a quantidade de numeros: \n");
  int deu_certo = scanf("%i", &quantidade);
  if (deu_certo && quantidade > 0){
    for(int i = 1; i <= quantidade; i++){
      int numero;
      printf("entre com o numero %io: \n", i);
      deu_certo = scanf("%i", &numero);
      if(deu_certo){
        soma = soma +numero;
       }else{
        printf("entrada invalida \n");
        getchar();
        i--;
       }
    }
  }










  return 0
}