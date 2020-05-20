#include <stdio.h>

int main(){
  int valor, valorAnterior=0,maior;

  for(int i=1; i<=50;i++){
    printf("Digite um numero: ");
    scanf("%d", &valor);
    
    if(valor > valorAnterior){
      maior = valor;
    }
    valorAnterior = valor;
  }

  printf("Maior valor: %d\n",maior);
  return 0;
}
