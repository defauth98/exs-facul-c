#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, num3, raiz;

    printf("Numero 1: ");
    scanf("%f", &num1);

    printf("Numero 2: ");
    scanf("%f", &num2);

    printf("Numero 3: ");
    scanf("%f", &num3);

    if (num1 > 0)
    {
        raiz = sqrt(num1);
        printf("Raiz quadrada -> %.2f\n", raiz);
    }
    else
    {
        printf("Valor ao quadrado -> %.2f\n", num1 * num1);
    }

    if((num2 >= 10) && (num2 <= 100))
    {
        printf("Esse numero esta entre 10-100 - intervalo permitido\n");
    }
    
    if(num3 < num2)
    {
        printf("Diferença entre os numeros: %.2f\n", num2 - num3);
    }
    else
    {
        printf("Numero 3 + 1 -> %.2f\n", num3 + 1);
    }
    
    
    
    
    return 0;
}
