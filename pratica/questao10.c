#include <stdio.h>
#include <math.h>

int main(){
  int numero1;

  printf("digite um numero: \n");
  int deu_certo = scanf("%i", &numero1);

  int milhares = numero1/1000;
  int centenas = numero1%1000/100;
  int dezenas = numero1%1000 %100/10;
  int unidades = numero1%1000 %100 %10 ;

  printf("milhares: %i\n", milhares);
  
  printf("centenas: %i\n", centenas);
    
  printf("dezenas: %i\n", dezenas);
   
  printf("unidades: %i\n", unidades);
  return 0;
}