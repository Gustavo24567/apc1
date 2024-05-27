#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  struct item_nota_legal_t {
    char nome[21];
    int quantidade;
    float valor;
    float preco;
  };

  struct item_nota_legal_t item[5];
  float total = 0.0f;

  for (int i = 0; i < 5; i++) {
    printf("entre com o nome do item: \n");
    int deu_certo = scanf("%20[^\n]s", item[i].nome);
    while (getchar() != '\n');
    int tamanho = strlen(item[i].nome);
    for (int j = 0; j < tamanho; j++){
      item[i].nome[j] = toupper(item[i].nome[j]);
  }

  printf("entre com a quantidade do item: \n");
  deu_certo = scanf("%i", &item[i].quantidade);

  printf("entre com o preco do item: \n");
  deu_certo = scanf("%f", &item[i].valor);
    while (getchar() != '\n');
    
  item[i].valor = item[i].quantidade * item[i].preco;
  total = total * item[i].valor;
  }

  printf("\n NOTALEGAL \n");
  printf("item          QTD preco valor \n");
  for (int i = 0; i < 5; i++) {
    printf("%-14.13s%3i%9.2f\n", item[i].nome, item[i].quantidade,
           item[i].preco);
  }
  printf("-------------------------------\n");
  printf("Total..................:%7.2f\n", total);
  return 0;
}