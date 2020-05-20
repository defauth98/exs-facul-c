#include <stdio.h>

struct habitante {
  int idade;
  char sexo[2];
  float salario;
  int numDeFilhos;
};

struct habitante Habitantes[500];

int inserirDados(){
  for (int i = 0; i < 500; i++)
  {
    printf("Dados do %dº habitante\n", i+1);

    printf("Idade: ");
    scanf("%d", &Habitantes[i].idade);

    printf("Sexo [m] ou [f]: ");
    scanf("%s", Habitantes[i].sexo);

    printf("Salario: ");
    scanf("%f", &Habitantes[i].salario);

    printf("Numero de filhos: ");
    scanf("%d", &Habitantes[i].numDeFilhos);

    printf("\n");
  }

  return 0;
}

int mediaSalarios(){
  float soma = 0;
  for (int i = 0; i < 500; i++)
  {
    soma += Habitantes[i].salario;
  }
  printf("\nMedia dos salarios: %.2f\n", soma/500 );
  return 0;
}

int main() {
  inserirDados();
  mediaSalarios();

  return 0;
}