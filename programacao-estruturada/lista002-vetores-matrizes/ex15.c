#define TAM_LINE 3
#define TAM_COLUMN 4

#include <stdio.h>

int main()
{
  int matriz[TAM_LINE][TAM_COLUMN], somaZero = 0, somaLinhaNula = 0, somaColunaNula = 0;

  for (int i = 0; i < TAM_LINE; i++)
  {
    for (int j = 0; j < TAM_COLUMN; j++)
    {
      printf("Valor[%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  for (int i = 0; i < TAM_LINE; i++)
  {
    for (int j = 0; j < TAM_COLUMN; j++)
    {
      if (matriz[i][j] == 0)
      {
        somaZero++;
      }
    }

    if (somaZero == TAM_LINE + 1)
    {
      somaLinhaNula++;
    }
    somaZero = 0;
  }

  somaZero = 0;

  for (int i = 0; i < TAM_LINE; i++)
  {
    for (int j = 0; j < TAM_COLUMN; j++)
    {
      if (matriz[j][i] == 0)
      {
        somaZero++;
      }
    }

    if (somaZero == TAM_COLUMN - 1)
    {
      somaColunaNula++;
    }
    somaZero = 0;
  }

  for (int i = 0; i < TAM_LINE; i++)
  {
    for (int j = 0; j < TAM_COLUMN; j++)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("Linhas nulas: %d\n", somaLinhaNula);
  printf("Colunas nulas: %d\n", somaColunaNula);

  return 0;
}