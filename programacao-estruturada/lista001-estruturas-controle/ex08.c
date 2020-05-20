#include <stdio.h>

int main() {
    float valor, cotacao;
    int moeda;

    printf("Moeda ([1]dolar ou [0]real): ");
    scanf("%d",&moeda);

    printf("Valor: ");
    scanf("%f", &valor);

    printf("Cotacao atual: ");
    scanf("%f", &cotacao);

    if(moeda == 1){
        printf("Conversao para real: R$%.2f\n", valor * cotacao);
    }
    else if(moeda == 0){
        printf("Conversao para dolar: $%.2f\n", valor / cotacao);
    }
    return 0;
}