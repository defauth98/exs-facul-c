#include <stdio.h>
#include <stdlib.h>

int main(){
    float x, y, z;

    printf("Valor de X:");
    scanf("%f", &x);

    printf("Valor de Y:");
    scanf("%f", &z);

    printf("Valor de Z:");
    scanf("%f", &z);

    if(x + y >= z && x + z >= y && y + z >= x){
        printf("E um triangulo!\n");

        if (x == y && y == z && z == y){
            printf("O triangulo e equilatero.\n");
        }

        else if (x == y || y == z || z == y){
            printf("O triangulo e isosceles.\n");
        }

        else if (x != y && y !=z && z != y){
            printf("O triangulo e escaleno.\n");
        }
    }
    else{
        printf("Nao e um triangulo.\n");
    }
}
