#include <stdio.h>
#include <math.h>

int main(){
  int minutos;
  int segundos;
  int horas;
   

  printf("entre com o valor de segundos: ");
  int deu_certo = scanf("%i", &segundos);

  horas = segundos / 3600;
  int resto_de_horas = segundos % 3600;
  minutos = resto_de_horas / 60;
  int resto_de_minutos = resto_de_horas % 60;
  

  printf("o valor final é %i,%i,%i\n", horas, minutos, resto_de_minutos);
  








  return 0;
}