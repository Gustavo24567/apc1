#include <stdio.h>
#include <math.h>

int main(){

int opcao;

  printf("menu principal \n");
  printf("1 - CONSULTAR SALDO \n");
  printf("2 - recarregar saldo \n");
  printf("3 - ligações recebidas \n");
  printf("4 - ligações feitas \n");
  printf("0 - sair \n");
  printf("entre com uma opcão: \n");
  int deu_certo = scanf("%i", &opcao);


  switch(opcao){
    case 1: 
      printf("seu saldo é: R$ 10,00 \n");
    break;
    case 2: {
      float valor;
      printf("entre com o valor para recarregar: \n");
      int deu_certo = scanf("%f", &valor);
      break;
    }
    case 3:{
      printf("as 5 ultimas ligações recebidas \n");
      printf("9999-9999 \n");
      printf("8888-8888 \n");
      printf("7777-7777 \n");
      printf("6666-6666 \n");
      printf("5555-5555 \n");
      break;
    }
    case 4:{
      printf("as 5 ultimas ligações feitas \n");
      printf("9999-9999 \n");
      printf("8888-8888 \n");
      printf("7777-7777 \n");
      break;
    }  
    case 0:{
      printf("saindo... \n");
      break;
    }
      
  }    





  return 0;
}