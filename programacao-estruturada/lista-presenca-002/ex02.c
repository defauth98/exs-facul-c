#include <stdio.h>

int main(){

  int num;

  printf("Numero: ");
  scanf("%d", &num);

  for(int i=0; i<=10;i++){
    printf("%d x %d = %d\n",num,i,num * i);
  }

  return 0;
}