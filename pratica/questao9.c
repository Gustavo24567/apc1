#include <stdio.h>
#include <math.h>

int main(){
  int dia;
  int mes;
  int ano;
  int dias_passados;

  printf("qual a sua idade anos: \n");
  int deu_certo = scanf("%i", &ano);
  printf("quantos meses vc tem: \n");
  deu_certo = scanf("%i", &mes);
  printf("quantos dias: \n");
  deu_certo = scanf("%i", &dia);

  dias_passados = (ano * 365) + (mes * 30) + dia;
  
  printf("dias passados: %i\n", dias_passados);
  









  return 0;
}