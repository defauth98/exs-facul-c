#include <stdio.h>

int main() {
    int num;
    
    printf("Numero inteiro: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Par\n");
    }
    else{
        printf("Impar\n");
    }

    if(num > 0){
        printf("Positivo\n");
    }
    else{
        printf("Negativo\n");
    }
    return 0;
}