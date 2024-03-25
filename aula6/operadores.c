#include <stdio.h>
#include <math.h>

int main(){ 
int numero1;
int numero2;
const double PI = 3.14;
  
  printf("entre com o valor de numero1: ");
  int deu_certo = scanf("%i", &numero1);
  
  printf("entre com o valor de numero2: ");
  deu_certo = scanf("%i", &numero2);

  int resultado = numero1 + numero2;
  printf("a soma é %i\n", resultado);

  resultado = numero1 - numero2;
  printf("a subtração é %i\n", resultado);

  resultado = numero1 * numero2;
  printf("a multiplicação é %i\n", resultado);

  float resultado2 = numero1 / (numero2 * 1.0);
  printf("a divisão é %.1f\n", resultado2);

  resultado = numero1 % numero2;
  printf("o resto é %i\n", resultado);

  //numero1 = numero1 + 1;
  //numero1++;
  //++numero1;

  printf("o incremento do numero1 é %i\n", numero1++);
  printf("o incremento do numero1 é %i\n", ++numero1);

  //numero1--
  //--numero1

  printf("o decremento do numero1 é %i\n", numero1--);
  printf("o decremento do numero1 é %i\n", --numero1);

  double raiz = sqrt(numero1);
  printf("a raiz quadrada de numero1 é %.2f\n", raiz);
  
  double potencia = pow(numero1, 5);
  printf("numero1 elevado a 5 é %.2f\n", potencia);
  
  double logaritimo = log2(numero1);
  printf("o logaritimo de numero1 na base 2 é %.2f\n", logaritimo);
  
  double seno = sin(numero1 * (PI/180));
  printf("o seno de numero1 é %.2f\n", seno);
  



  return 0;
}