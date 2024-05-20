#include <stdio.h>
#define limite 10

int main(){
  int numeros{LIMITE};

  for(int i=0; i<limite; i++){
    printf("entre com %io um numero \n", i+1);
    int deu_certo=scanf("%i", &numero);
  }

  int numero;
  printf("entre com um numero a ser procurado:  ");
  int deu_certo = scanf("%i", &numero);
  int achei =-1

  for(int i=0; i<limite; i++){
    if(numero == numero[i]){
      achei =1;
      break
    }
  }
  if (achei<0) {
    printf("numero %i nao foi encontrado\n", numero);
  }else{
    printf("numero %i foi encontrado na posição %i\n", numero, achei);
  }




  return 0;
}