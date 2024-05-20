#include <stdio.h>

int main(){
  float boletim[10][3];

  for(int i = 0; i < 10; i++){
    for(int j=0; j < 3; j++){
      printf("entre com a nota %i do aluno %i:",j+1,i+1);
      int deu_certo = scanf("%f", &boletim[i][j]);
    }
    boletim [i][2]= 0.4 *boletim[i][0] +0.6 *boletim[i][1];
  }

  printf("\nboletim\n");
  printf("aluno  nota1  nota2  media\n");
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 3; j++){
      printf("%5.1f", boletim[i][j]);
    }
    printf("\n");
  }












  return 0;
}