#define TAM_MAX 15

#include <stdio.h>

int main() {
  int vetor[TAM_MAX], pares[TAM_MAX], impares[TAM_MAX], parIndex =0, imparIndex=0;

  for (int i = 0; i < TAM_MAX; i++)
  {
    printf("Digite o %dº elemento: ",i+1);
    scanf("%d", &vetor[i]);
  }

  for(int i = 0; i < TAM_MAX; i++){
    if(vetor[i] % 2 == 0){
      pares[parIndex] = vetor[i];
      parIndex++;
    }else{
      impares[imparIndex] = vetor[i];
      imparIndex++;
    }
  }

  printf("\nVetores de numeros pares: \n");
  for (int i = 0; i < parIndex; i++)
  {
    printf("%d ",pares[i]);
  }


  printf("\nVetores de numeros impares: \n");
  for (int i = 0; i < imparIndex; i++)
  {
    printf("%d ",impares[i]);
  }
  
  printf("\n");
  return 0;
}