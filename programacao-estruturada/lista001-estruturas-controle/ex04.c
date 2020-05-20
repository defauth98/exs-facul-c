#include <stdio.h>

int main() {
    float salarioBruto, proventos;

    printf("Salario bruto: ");
    scanf("%f", &salarioBruto);

    printf("Proventos: ");
    scanf("%f", &proventos);

    if(salarioBruto <= 50){
        printf("Salario liquido -> %.2f\n", salarioBruto + proventos - (salarioBruto * 5 / 100));
    }
    else{
        printf("Salario liquido -> %.2f\n", salarioBruto + proventos - (salarioBruto * 10 / 100));
    }
    return 0;
}