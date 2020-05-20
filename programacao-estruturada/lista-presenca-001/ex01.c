#include <stdio.h>
#include <string.h>

int main(){
  float altura, somaAlturaMulheres=0,maior=0, menor=999;
  int quantHomens = 0, quantMulheres=0;
  char sexo[2], valorSexo;

  for(int i = 1; i <= 50; i++){
    printf("Homem[H] ou Mulher[M]: ");
    scanf("%s", &sexo);
    
    valorSexo = strcmp(sexo, "M");

    printf("Altura: ");
    scanf("%f", & altura);
  
    if(valorSexo == -5){
      quantHomens++;
    }
    else{
      quantMulheres++;
      somaAlturaMulheres+=altura;
    }

    if(altura > maior){
      maior = altura;
    }
    if(altura < menor){
      menor = altura;
    }

  }

  printf("Maior altura do grupo: %.2f\n",maior);
  printf("Menor altura do grupo: %.2f\n",menor);
  printf("Media de altura das mulheres: %.2f\n", somaAlturaMulheres / quantMulheres);
  printf("Quantidade de homens: %d\n", quantHomens);

  return 0;
}
