#define TAM_M 3
#define TAM_N 4

#include <stdio.h>

int main()
{
  int matriz[TAM_M][TAM_N];
  float zeros = 0, validos = 0;

  for (int i = 0; i < TAM_M; i++)
  {
    for (int j = 0; j < TAM_N; j++)
    {
      printf("Valor[%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  for (int i = 0; i < TAM_M; i++)
  {
    for (int j = 0; j < TAM_N; j++)
    {
      if (matriz[i][j] == 0)
      {
        zeros++;
      }
      else
      {
        validos++;
      }
    }
  }

  printf("Grau de esparsividade: %.2f\n", zeros / validos);
  return 0;
}