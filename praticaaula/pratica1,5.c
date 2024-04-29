#include <stdio.h>
#include <math.h>

int main(){
  int nota;

  printf("entre com a nota do uber: \n");
  int deu_certo = scanf("%i", &nota);

  if (nota == 1){
    printf("insuficiente\n"); 
  } else if (nota == 2){
    printf("suficiente\n");
  }else if (nota == 3){
    printf("bom\n");
  }else if (nota == 4){
    printf("muito bom\n");
  }else if (nota == 5){
    printf("excelente\n");
  } else {
    printf("nota invalida\n");
  }



  return 0;
}