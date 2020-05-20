#define TAM_LINE 7
#define TAM_COLUMN 5

#include <stdio.h>

int main() {
  int matriz[TAM_LINE][TAM_COLUMN], maior;

  for (int i = 0; i < TAM_LINE; i++)
  {
    for (int j = 0; j < TAM_COLUMN; j++)
    {
      printf("Valor[%d][%d]: ", i,j);
      scanf("%d", &matriz[i][j]);
    }
    
  }
  
  maior = matriz[0][0];

  for (int i = 0; i < TAM_LINE; i++)
  {
    for (int j = 0; j < TAM_COLUMN; j++)
    {
      if(matriz[i][j] > maior){
        maior = matriz[i][j];
      }
    }
  }

  printf("Maior valor: %d\n", maior);

  return 0;
}