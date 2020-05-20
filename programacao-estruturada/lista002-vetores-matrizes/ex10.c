#define TAM_LINE 7
#define TAM_COLUMN 5

#include <stdio.h>

int main()
{
  int matriz[TAM_LINE][TAM_COLUMN], soma = 0, i = 0,j = 0;

  while(i < TAM_LINE)
  {
    while(j < TAM_COLUMN)
    {
      printf("Valor[%d][%d]: ",i,j);
      scanf("%d", &matriz[i][j]);
      j++;
    }
    j = 0;
    i++;
  }
  i = 0;

  while(i < TAM_LINE)
  {
    while(j < TAM_COLUMN)
    {
      soma += matriz[i][j];
      j++;
    }
    j = 0;
    i++;
    printf("Somatoria linha %d: %d\n",i, soma);
    soma = 0;
  }

  return 0;
}