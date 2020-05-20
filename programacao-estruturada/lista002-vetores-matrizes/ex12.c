#define TAM_LINE 3
#define TAM_COLUMN 3

#include <stdio.h>

int main()
{
  int matriz[TAM_LINE][TAM_COLUMN], i = 0, j = 0;

  for (int x = 0; x < TAM_LINE; x++)
  {
    for (int y = 0; y < TAM_COLUMN; y++)
    {
      printf("Valor[%d][%d]: ", x, y);
      scanf("%d", &matriz[x][y]);
      j++;
    }
    i++;
  }

  if (matriz[i][j] == matriz[j][i])
  {
    printf("Matriz simetrica");
  }
  else
  {
    printf("Matriz não simetrica");
  }

  return 0;
}