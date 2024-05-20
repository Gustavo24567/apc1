#include <stdio.h>
#include <string.h>

int man(){
  char nome[31];
  
  printf("entre com seu nome: \n");
  int deu_certo = scanf("%{^\n}s", frase);

  printf("ola %s!\n", nome);
  char mensagem[30];
  strcpy(mensagem, "ola ");
  strcat(mensagem, nome);
  strcat(mensagem, "!");
  printf("%s\n", mensagem);
  int tamanho = strlen(nome);
  printf("o tamanho da string eh %i\n", tamanho);
  printf(" as strings nome e mensagem sao iguais? %i\n", strcmp(nome, mensagem));







  return 0;
}