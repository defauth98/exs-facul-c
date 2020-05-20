#include <stdio.h>

int main() {
    int i;
    float a, b, c;

    printf("Digite um numero inteiro entre 1 e 3: ");
    scanf("%d", &i);

    printf("Valor de A: ");
    scanf("%f", &a);

    printf("Valor de B: ");
    scanf("%f", &b);

    printf("Valor de C: ");
    scanf("%f", &c);

    if(i == 1){
        printf("\nOrdem crescente: ");

        if((a < b) && (b < c)){
            printf("%.f -> %.f -> %.f\n",a,b,c);
        }
        else if((a < c) && (c < b)){
            printf("%.f -> %.f -> %.f\n", a,c,b);
        }
        else if((b < a) && (a < c)){
            printf("%.f -> %.f -> %.f\n",b,c,a);
        }
        else if((b < c) && (c < a)){
            printf("%.f -> %.f -> %.f\n",b,a,c);
        }
        else if((c < a) && (a < b)){
            printf("%.f -> %.f -> %.f\n",c,b,a);
        }
        else if((c < b) && (b < a)){
            printf("%.f -> %.f -> %.f\n",c,a,b);
        }     
    }
    else if(i == 2){
        printf("\nOrdem decrecente -> ");

        if((a < b) && (b < c)){
            printf("%.f -> %.f -> %.f\n", c,b,a);
        }
        else if((a < c) && (c < b)){
            printf("%.f -> %.f -> %.f\n", b,c,a);
        }
        else if((b < a) && (a < c)){
            printf("%.f -> %.f -> %.f\n",a,c,b);
        }
        else if((b < c) && (c < a)){
            printf("%.f -> %.f -> %.f\n",c,a,b);
        }
        else if((c < a) && (a < b)){
            printf("%.f -> %.f -> %.f\n",a,b,c);
        }
        else if((c < b) && (b < a)){
            printf("%.f -> %.f -> %.f\n",b,a,c);
        }         
    }
    else if(i == 3){
        printf("\nMaior no meio -> ");

        if((a < b) && (b < c)){
            printf("%.f -> %.f -> %.f\n",a,c,b);
        }
        else if((a < c) && (c < b)){
            printf("%.f -> %.f -> %.f\n", a,b,c);
        }
        else if((b < a) && (a < c)){
            printf("%.f -> %.f -> %.f\n",b,c,a);
        }
        else if((b < c) && (c < a)){
            printf("%.f -> %.f -> %.f\n",b,a,c);
        }
        else if((c < a) && (a < b)){
            printf("%.f -> %.f -> %.f\n",c,b,a);
        }
        else if((c < b) && (b < a)){
            printf("%.f -> %.f -> %.f\n",c,a,b);
        }     
    }
    return 0;
}