#include <stdio.h>

int main(){
  float salario, somaSalario=0, somaFilhos=0, maiorQue300=0;
  int nFilhos;

  for(int i = 1; i <= 4;i++){
    printf("Salario do funcionario %d: ", i);
    scanf("%f", &salario);

    printf("Numero de filhos: ");
    scanf("%d", &nFilhos);

    somaSalario += salario;
    somaFilhos += nFilhos;

    if((nFilhos >= 1) && (salario >= 300)){
      maiorQue300++;
    }
  }

  printf("Media salarial -> %.2f\n", somaSalario / 4);
  printf("Media do numero de filhos -> %.2f\n", somaFilhos / 4);
  printf("Percentual de pessoas com salario ate 300 com filhos -> %.2f\n", maiorQue300 * 100 / 4);

  return 0;
}
