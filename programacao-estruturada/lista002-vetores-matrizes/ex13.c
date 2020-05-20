#define TAM_LINE 5
#define TAM_COLUMN 5

#include <stdio.h>

int main()
{
  int matriz[TAM_LINE][TAM_COLUMN], somaLinhaQuatro = 0, somaColunaDois = 0, somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0, somaTodosElementos = 0,y = 0;

  for (int x = 0; x < TAM_LINE; x++)
  {
    for (int y = 0; y < TAM_COLUMN; y++)
    {
      printf("Valor[%d][%d]: ", x, y);
      scanf("%d", &matriz[x][y]);
    }
  }

  // Soma da linha 4
  for (int i = 0; i < TAM_LINE; i++)
  {
    somaLinhaQuatro += matriz[3][i];
  }

  // Soma da columa 2
  for (int i = 0; i < TAM_LINE; i++)
  {
    somaColunaDois += matriz[1][i];
  }

  // Soma da diagonal principal
  for (int i = 0; i < TAM_LINE; i++)
  {
    somaDiagonalPrincipal += matriz[i][i];
  }

  // Soma diagonal secundaria
  for (int i = 4; i >= 0; i--)
  {
    somaDiagonalSecundaria += matriz[i][y];
    y++;
  }

  for (int i = 0; i < TAM_LINE; i++)
  {
    for (int j = 0; j < TAM_COLUMN; j++)
    {
      somaTodosElementos += matriz[i][j];
    }
  }

  printf("\n\nSoma da linha 4: %d\n", somaLinhaQuatro);
  printf("Soma da coluna 2: %d\n", somaColunaDois);
  printf("Soma da diagona principal: %d\n", somaDiagonalPrincipal);
  printf("Soma da diagonal secundaria: %d\n", somaDiagonalSecundaria);
  printf("Soma de todos os elementos: %d\n\n", somaTodosElementos);

  for (int i = 0; i < TAM_LINE; i++)
  {
    for (int j = 0; j < TAM_COLUMN; j++)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}