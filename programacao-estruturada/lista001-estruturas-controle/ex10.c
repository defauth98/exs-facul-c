#include <stdio.h>

int main() {
    float nota1, nota2, nota3, me, ma;
    char indice[2];

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    printf("Nota 3: ");
    scanf("%f", &nota3);

    printf("Media de aproveitamento: ");
    scanf("%f", &me);

    ma = (nota1 + nota2 * 2 + nota3 * 3 + me ) / 7;

    printf("\n\nNotas -> %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
    printf("Media dos exercios -> %.2f\n", me);
    printf("Media de aproveitamento -> %.2f\n", ma);

    if(ma >= 9){
        printf("Indice de aproveitamento -> A\n");
        printf("Aprovado\n");
    }
    else if((ma >= 7.5) && (ma < 9)){
        printf("Indice de aproveitamento -> B\n");
        printf("Aprovado\n");
    }
    else if((ma >= 6) && (ma < 7)){
        printf("Indice de aproveitamento -> C\n");
        printf("Aprovado\n");
    }
    else if((ma >= 4) && (ma < 6)){
        printf("Indice de aproveitamento -> D\n");
        printf("Reprovado\n");
    }
    else if(ma < 4){
        printf("Indice de aproveitamento -> E\n");
        printf("Reprovado\n");
    }
    
    return 0;
}