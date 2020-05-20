#define TAM_MAX 4

#include <stdio.h>

int exibirVezes(int vetor[TAM_MAX], int elemento){
  int count = 0;
  for(int i = 0; i < 4;i++){
    if(vetor[i] == elemento){
      count++;
    }
  }
  return count;
}

int main() {
  int vetor[TAM_MAX];

  for (int i = 0; i < TAM_MAX; i++)
  {
    printf("%dº elemento do vetor: ",i + 1);
    scanf("%d", &vetor[i]);
  }
  
  printf("Quantidade de vezes que o numero 1 esteve no vetor: %d\n", exibirVezes(vetor, 1));
  return 0;
}
