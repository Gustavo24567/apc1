#include <stdio.h>
#include <math.h>

int main(){
  int nota;
  printf("entre com a nota do uber: \n");
  int deu_certo = scanf("%i", &nota);

  if (nota == 1){
    printf("ganhou *\n");
  }else if(nota == 2){
    printf("ganhou **\n");
  }else if (nota == 3){
    printf("ganhou ***\n");
  }else if (nota == 4){
    printf("ganhou ****\n");
  }else if(nota == 5){
    printf("ganhou *****\n");
  }







  return 0;
}