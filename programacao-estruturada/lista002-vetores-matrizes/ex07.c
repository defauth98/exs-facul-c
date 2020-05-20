#define TAM_MAX 30

#include <stdio.h>

int notasInvalidas(float notas[TAM_MAX]){
  int quantNotaInvalida = 0;
  for (int i = 0; i < TAM_MAX; i++)
  {
    if((notas[i] < 0) || (notas[i] > 10)){
      quantNotaInvalida++;
    }
  }

  return quantNotaInvalida;
}

int mediaDasNotas(float notas[TAM_MAX]){
  int soma=0;
  float media;

  for (int i = 0; i < TAM_MAX; i++)
  {
    soma += notas[i];
  }
  media = soma / TAM_MAX;

  return media;

}

int notasAcimaDaMedia(float notas[TAM_MAX]){
  int quant=0;
  for (int i = 0; i < TAM_MAX; i++)
  {
    if(notas[i]>= 7){
      quant++;
    }
  }
  return quant; 
}

int main() {
  float notas[TAM_MAX];

  for (int i = 0; i < TAM_MAX; i++)
  {
    printf("Digita a %dª nota: ",i+1);
    scanf("%f", &notas[i]);
  }

  printf("Numero de notas invalidas: %d\n", notasInvalidas(notas));
  printf("Media das notas validas: %d\n",mediaDasNotas(notas));
  printf("Quantidade de notas acima da media: %d\n", notasAcimaDaMedia(notas));
  
  return 0;
}