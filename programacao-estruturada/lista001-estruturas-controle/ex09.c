#include <stdio.h>

int main() {
    char numeroFuncionario[8];
    float salarioAtual,indiceAumento;

    printf("Numero do funcionario: ");
    scanf("%s", &numeroFuncionario);

    printf("Salario atual: ");
    scanf("%f", &salarioAtual);

    if(salarioAtual <= 400){
        indiceAumento = 15;
    }
    else if((salarioAtual > 400) && (salarioAtual <= 700)){
        indiceAumento = 12;
    }
    else if((salarioAtual > 700) && (salarioAtual <= 100)){
        indiceAumento = 10;
    }
    else if((salarioAtual > 1000) && (salarioAtual <= 1800)){
        indiceAumento = 7;
    }
    else if((salarioAtual > 1800) && (salarioAtual <= 2500)){
        indiceAumento = 4;
    }
    else{
        indiceAumento = 0;
    }

    printf("\n\nNumero do funcionario -> %s\n", numeroFuncionario);
    printf("Salario atual -> %.2f\n", salarioAtual);
    printf("Percentual de aumento -> %.2f\n", indiceAumento);
    printf("Novo salario -> %.2f\n", salarioAtual + (salarioAtual * indiceAumento / 100));

    return 0;
}