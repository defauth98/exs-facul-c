#include <stdio.h>

int main() {
    int sexo;    
    float altura;

    printf("Sexo [1]Masculino [0]Feminino: ");
    scanf("%d", &sexo);

    printf("Altura: ");
    scanf("%f", &altura);

    if(sexo == 1){
        printf("Peso ideal -> %.2f\n", (72.7 * altura)-58);
    }
    else
    {
        printf("Peso ideal -> %.2f\n", (62.1 * altura)-44.7);
    }
    
    return 0;
}