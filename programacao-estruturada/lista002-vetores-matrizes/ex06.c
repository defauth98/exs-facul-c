#define TAM_MAX 5

#include <stdio.h>

int main() {
  int vet1[TAM_MAX], vet2[TAM_MAX];

  for (int i = 0; i < TAM_MAX; i++)
  {
    printf("%dº valor do primerio vetor: ",i+1);
    scanf("%d", &vet1[i]);
  }

  for (int i = 0; i < TAM_MAX; i++)
  {
    printf("%dº valor do primerio vetor: ",i+1);
    scanf("%d", &vet2[i]);
  }
  
  //soma
  for (int i = 0; i < TAM_MAX; i++)
  {
    printf("\nSoma dos %dº elementos: %d",i+1,vet1[i] + vet2[2]);
  }

  printf("\n");

  //subtração
  for (int i = 0; i < TAM_MAX; i++)
  {
    printf("\nSubtração dos %dº elementos: %d",i+1,vet1[i] - vet2[2]);
  }
  
  printf("\n");

  //produto
  for (int i = 0; i < TAM_MAX; i++)
  {
    printf("\nProduto dos %dº elementos: %d",i+1,vet1[i] * vet2[2]);
  }

  printf("\n");

  //divisão
  for (int i = 0; i < TAM_MAX; i++)
  {
    if((vet1[i] == 0) || (vet2[i] == 0)){
      printf("\nDivisão nos indices %d: ",i);
      printf("\nNao e possivel dividir por zero");
    }else{
      printf("\nDivisão dos %dº elementos: %.1f",i+1,vet1[i] / vet2[2]);
    }
  }

  printf("\n");
  return 0;
}