#include <stdio.h>

int main(){

  char opcao;

  printf("meu jogo\n");
  printf("1 - jogar\n");
  printf("2 - ver pontuação\n");
  printf("3 - ajuda\n");
  printf("0 - sair\n");
  printf("entre com uma opção: \n");
  int deu_certo = scanf("%c", &opcao);
  while (getchar() != '\n') 

  switch (opcao){
    case '1':{ break; }
    case '2':{ 
      deu_certo = system("clear");
      break; }
    case '3':{ break; }
    case '0': printf("ate logo\n"); break; 
  }


  return 0;
}