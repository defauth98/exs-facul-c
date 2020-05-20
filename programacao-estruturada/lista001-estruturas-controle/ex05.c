#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);
    
    printf("Nota 3: ");
    scanf("%f", &nota3);

    if((nota1 > nota2) && (nota2 >= nota3)){
        media = (nota1 * 4 / 10) + (nota2 * 3 / 10) + (nota3 * 3 / 10);
    }
    else if((nota1 > nota3) && (nota3 >= nota2)){
        media = (nota1 * 4 / 10) + (nota2 * 3 / 10) + (nota3 * 3 / 10);
    }
    else if((nota2 > nota1) && (nota1 >= nota3)){
        media = (nota2 * 4 / 10) + (nota1 * 3 / 10) + (nota3 * 3 / 10);
    }
    else if((nota2 > nota3) && (nota3 >= nota1)){
        media = (nota2 * 4 / 10) + (nota1 * 3 / 10) + (nota3 * 3 / 10);
    }
    else if((nota3 > nota2) && (nota2 >= nota1)){
        media = (nota3 * 4 / 10) + (nota2 * 3 / 10) + (nota1 * 3 / 10);
    }
    else if((nota3 > nota1) && (nota1 >= nota2)){
        media = (nota3 * 4 / 10) + (nota2 * 3 / 10) + (nota1 * 3 / 10);
    }

    printf("Media -> %.2f\n", media);

    if(media >= 5){
        printf("Aprovado\n");
    }
    else{
        printf("Reprovado\n");
    }
    return 0;
}