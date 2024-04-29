#include <stdio.h>
#include <math.h>

int main(){

  float bruto;
  float desconto;

  printf("entre com o valor bruto: \n");
  int deu_certo = scanf("%f", &bruto);
  if (bruto <= 100.0f){
     desconto = bruto * 0.01f;
    printf("o valor liquido é: %f\n", bruto);
  } else if(bruto <= 500.0f){
    desconto = bruto * 0.05f;
  } else {
    desconto = bruto * 0.1f;
    }
  
printf("o valor desconto é: %.2f\n", desconto);

  return 0;
}