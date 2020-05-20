#include <stdio.h>

int main() {
    float x,y,z;

    printf("Valor de x: ");
    scanf("%f", &x);
    
    printf("Valor de y: ");
    scanf("%f", &y);
    
    printf("Valor de z: ");
    scanf("%f", &z);

    if((x < y) && (y < z)){
        printf("Menor numero -> %.f\n", x);
    }
    else if((x < z) && (z < y)){
        printf("Menor numero -> %.f\n", x);
    }
    else if((y < x) && (x < z)){
        printf("Menor numero -> %.f\n", y);
    }
    else if((y < z) && (z < x)){
        printf("Menor numero -> %.f\n", y);
    }
    else if((z < x) && (x < y)){
        printf("Menor numero -> %.f\n", z);
    }
    else if((z < y) && (y < x)){
        printf("Menor numero -> %.f\n", z);
    }
    return 0;
}