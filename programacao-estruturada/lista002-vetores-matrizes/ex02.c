#define TAM_MAX 20

#include <stdio.h>

int main() {
  int vetor[TAM_MAX];

  for(int i = 0; i < TAM_MAX;i++){
    printf("Digite o %dº elemento do vetor: ", i+1);
    scanf("%d", &vetor[i]);
  }

  for(int j = 0; j < TAM_MAX;j++){
    vetor[j] = vetor[j] * j;
  }

  printf("\nValores multiplicados por seus respectivos lugares no vetor: \n");

  for (int x = 0; x < TAM_MAX; x++)
  {
    printf("%d ",vetor[x]);
  }
  
  printf("\n");
  return 0;
}
