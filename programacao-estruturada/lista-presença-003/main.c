#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,nh,nm;
    /*i= contador, nh= numero de homens, nm= numero de mulheres.*/
    float a,ma,me,md,alm;
    /*a=altura, ma= numero maior, me=numero menor, md=media das mulheres, alm=altura das mulheres*/
    char s,h,m;
    /*s=sexo, h= homem, m=mulher*/


    for(i==0;i<3;i++)/*aqui comecei fazendo o laço de repetição que leia no começo tres valores, q se funcionar com tres funciona com 50*/
     {
     printf("informe sua altura\n");
     scanf("%f", &a);
     printf("informe seu genero - (m) se for mulher, (h) se for homem\n");
     scanf("%s", &s);

     if (a>ma)/*aqui eu coloquei se a altura tiver um valor maior que a varioavel "maior", entao*/
     {
      ma=a;/*ele vai pegar esse maior valor e atribuir  esse valor para a variavel "maior"*/
     }else if (me<ma)/*aqui eu tentei colocar se a o valor da variavel "menor" tivar menos que o valor da variavel "maior, entao*/
     {
      me=a;/*então era para atribuir esse valor para a variavel "menor", so que não funciona, ai tentei de varios jeito fazer a atribuição do valor da certo e não consegui*/
     }
    }
    if(s=='m')/*aqui eu tentei colocar a se a variavel fosse "m" na hora de informar o genero, então*/
    {
     alm= alm+a;/*era para o valor da altura da muler(alm) ser ele mesmo mais os valores de as alturas, mas n funciona*/
     m= m++;/*e quando colocasse o valor "m" quando informasse seu genero era para adicionar mais um na variavel mulher , so que nao funcina*/
    }
    if(m==0)/*aqui coloquei se a variavel mulher dasse 0 ela mostraria a seguinte frase*/
    {
     printf("a media das mulheres e 0 \n");
    }else/*se nao ela pegaria a o valor da altura das mulheres e dividiria por quanta vezes foi volocado o caracter "m" quando indentificar seu genero*/
    {
     md= alm/m;
    }

    if(s=='h')/*aqui eu coloquei se digitasse "h" na hora de identificar seu genero ,entao*/
    {
     nh= 50-m;/*aqui ia pegar o valor a quantidade de repetição que é 50 se subtrair por o valor de "m", isso daria a quantidade de homens so que nao funciona*/

    }


    printf("a maior altura e: %.2f\n", ma);
    printf("a menor altura e: %.2f\n", me);
    printf("a media das mulheres e: %.2f\n", md);
    printf("o numero de homens e:%d\n",nh);

    return 0;
}
