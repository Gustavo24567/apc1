#include<stdio.h>

int main(){

  float valor_hora_trabalhada = 150.0f;
  int total_de_horas_trabalhada = 200;

  const float valor_IR = 0.25f;
  const float valor_INSS = 0.11f;

  float salario_bruto = valor_hora_trabalhada * total_de_horas_trabalhada;
  float imposto_de_renda = salario_bruto * valor_IR;
  float imposto_de_INSS = salario_bruto * valor_INSS;
  float IR = salario_bruto * valor_INSS;

  
  float salario_liquido = salario_bruto - imposto_de_renda - imposto_de_INSS;

  printf("----------------\n");
  printf("CONTRACHEQUE\n");
  printf("----------------\n");
  printf("salario bruto......: %8.2f\n", salario_bruto);
  printf("imposto de renda..:  %8.2f\n", imposto_de_renda);
  printf("imposto de inss...:  %8.2f\n", imposto_de_INSS);
  printf("salario liquido...:  %8.2f\n", salario_liquido);





  return 0;
}

  

