#include <stdio.h>

int main() {
    int idade;

    printf("Idade: ");
    scanf("%d", &idade);

    if((idade >= 1) && (idade <= 13)){
        printf("Crinca\n");
    }
    else if((idade > 13) && (idade <= 20)){
        printf("Adolecente\n");
    }
    else if((idade > 20) && (idade <= 50)){
        printf("Adulto\n");
    }
    else{
        printf("Idosa\n");
    }

    return 0;
}