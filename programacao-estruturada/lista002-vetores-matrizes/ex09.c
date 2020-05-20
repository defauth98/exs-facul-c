#define TAM_MAX 5

#include <stdio.h>

int main() {
  int matriz[TAM_MAX][TAM_MAX],diagonalSecundaria[TAM_MAX],linha = 0, coluna=TAM_MAX-1, index = 0;

  for(int i = 0; i < TAM_MAX;i++){
    for(int j = 0; j < TAM_MAX;j++){
      printf("Digite o valor [%d][%d] da matriz: ",i,j);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("\nMatriz: \n");

  for(int i = 0; i < TAM_MAX;i++){
    for(int j = 0; j < TAM_MAX;j++){
     printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  for(int i = 0; i < TAM_MAX;i++){
    diagonalSecundaria[index] = matriz[linha][coluna];
    coluna--;
    linha++;
    index++;
  }

  printf("\nDiagonal secundaria da matriz: ");
  for (int i = 0; i < TAM_MAX; i++)
  {
    printf("%d ", diagonalSecundaria[i]);
  }
  printf("\n");
  return 0;
}