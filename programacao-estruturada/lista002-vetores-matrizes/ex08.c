#define TAM_MAX 20

#include <stdio.h>

int main() {
  int vetorX[TAM_MAX], vetorY[TAM_MAX], PE;

  for (int i = 0; i < TAM_MAX; i++)
  {
    printf("%dº elemento do vetor x:",i+1);
    scanf("%d", &vetorX[i]);
  }
  
  for (int i = 0; i < TAM_MAX; i++)
  {
    printf("%dº elemento do vetor y:",i+1);
    scanf("%d", &vetorY[i]);
  }
  
  for (int i = 0; i < TAM_MAX; i++)
  {
    PE += vetorX[i]*vetorY[i];
  }
  
  printf("Produto escalar: %d\n", PE);
  return 0;
}