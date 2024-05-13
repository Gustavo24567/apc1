#include <stdio.h>

int main(){

  int numero;
  int maior;
  int menor;
  int numero_eh_valido = 0;

  while(numero_eh_valido == 0){
    printf("entre com um numero, 0 acaba\n");
    int deu_certo = scanf("%i", &numero);

    numero_eh_valido = deu_certo && numero != 0

    if (maior < numero){
      maior = numero;
    }
    if (menor > numero){
      menor = numero;
    }
  }

  printf("coloque 5 numeros diferente de 0\n");
  int deu_certo = scanf("%i", &numero);


  return 0;
}