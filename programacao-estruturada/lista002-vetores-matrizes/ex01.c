#define TAM_MAX 15

#include <stdio.h>

int main()
{
  int vetor[TAM_MAX], maior = 0;

  for (int i = 0; i <= TAM_MAX; i++)
  {
    printf("%d valor: ", i+1);
    scanf("%d", &vetor[i]);
  }

  for (int j = 0; j <= TAM_MAX; j++)
  {
    if (vetor[j] > maior)
    {
      maior = vetor[j];
    }
  }

  printf("Maior valor do vetor: %d\n", maior);

  return 0;
}