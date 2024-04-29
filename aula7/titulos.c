#include <stdio.h>
#include <math.h>

int main(){
  int idade;

  printf("entre com a idade: \n");
  int deu_certo = scanf("%i", &idade);

  if (idade < 16){
    printf("não eleitor \n");
  }else if (idade >=18 && idade <=65){
    printf("eleitor obrigatorio \n");
  }









  return 0;
}