#include <stdio.h>

int main(){
  printf("----------------\n");
  printf("NOTA LEGAL\n");
  printf("----------------\n");
  printf("ITEM, QTD, PREÇO \n");

  char item[31] = "arroz";
  int qtde = 2;
  float preço = 15.0f;
  printf("%5s %2i %7.2f\n" , item, qtde, preço);

  char item2[31] = "feijao";
  qtde = 2;
  preço = 8.0f;
  printf("%5s %2i %6.2f\n" , item2, qtde, preço);

  printf("total      %5.2f\n", 23.0f);

  
  //printf("arroz  2      15,00\n");
  //printf("feijao 1    8.00\n");

  return 0;
}