#include <stdio.h>

int main(){

//declaração de variaveis
int t = 1; //torre
int b = 1; //bispo
int r = 1; //rainha

//primeira movimentação torre

printf("Torre\n");
for(t; t<=5; t++)
{printf("Direita\n");}

printf("\n");

//segunda movimentação bispo

printf("Bispo\n");
do{
    printf("Cima, direita\n");
    b++;
  } while(b <= 5);

  printf("\n");

  //terceira movimentação rainha

  printf("Rainha\n");
  while(r <= 8){
    printf("Esquerda\n");
    r++;
  }

  return 0;
}
