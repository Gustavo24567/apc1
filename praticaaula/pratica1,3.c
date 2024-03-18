#include <stdio.h>

int main(){
  float GB;

  printf("entre com o valor de GB: ");
  int deu_certo = scanf("%f", &GB);

  float bytes = GB * 1024 * 1024 * 1024;
  printf("o valor de bytes eh %f\n", bytes);



  return 0;
}