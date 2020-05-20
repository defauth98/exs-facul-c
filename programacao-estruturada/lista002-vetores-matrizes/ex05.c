#include <stdio.h>

int notasAlunos(int tamanho){
  int notaG1[tamanho],notaG2[tamanho], notaG3[tamanho];

  for (int i = 0; i < tamanho; i++)
  {
    printf("Nota G1 do %dº aluno: ",i+1);
    scanf("%d", &notaG1[i]);
  }

  for (int i = 0; i < tamanho; i++)
  {
    printf("Nota G2 do %dº aluno: ",i+1);
    scanf("%d", &notaG2[i]);
  }

  for (int i = 0; i < tamanho; i++)
  {
    notaG3[i] = (notaG1[i] + notaG2[i]) / 2;
  }
  
  for (int i = 0; i < tamanho; i++)
  {
    printf("\nNotas do %dº aluno: G1=%d G2=%d G3=%d", i+1, notaG1[i], notaG2[i], notaG3[i]);
  }

  printf("\n");
  return 0; 
}

int main() {
  int numeroAlunos;

  printf("Digite o numero de alunos:");
  scanf("%d", &numeroAlunos);

  notasAlunos(numeroAlunos);
  return 0;
}
