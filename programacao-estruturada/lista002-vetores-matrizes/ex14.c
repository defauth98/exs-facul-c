#define MAX_TAM 5

#include <stdio.h>

int main()
{
  int matriz[MAX_TAM][MAX_TAM], vetorSL[MAX_TAM], vetorSC[MAX_TAM], soma = 0;

  for (int i = 0; i < MAX_TAM; i++)
  {
    for (int j = 0; j < MAX_TAM; j++)
    {
      printf("Valor[%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  // Soma das linhas
  for (int i = 0; i < MAX_TAM; i++)
  {
    for (int j = 0; j < MAX_TAM; j++)
    {
      soma += matriz[i][j];
    }
    vetorSL[i] = soma;
    soma = 0;
  }

  // Soma das colunas
  for (int i = 0; i < MAX_TAM; i++)
  {
    for (int j = 0; j < MAX_TAM; j++)
    {
      soma += matriz[j][i];
    }
    vetorSC[i] = soma;
    soma = 0;
  }

  printf("Vetor da soma da linhas: ");
  for (int i = 0; i < MAX_TAM; i++)
  {
    printf("%d ", vetorSL[i]);
  }
  printf("\n");

  printf("Vetor da soma da colunas: ");
  for (int i = 0; i < MAX_TAM; i++)
  {
    printf("%d ", vetorSC[i]);
  }
  printf("\n");

   for (int i = 0; i < MAX_TAM; i++)
  {
    for (int j = 0; j < MAX_TAM; j++)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}