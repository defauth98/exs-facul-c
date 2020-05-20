#include <stdio.h>

int main()
{
  float somaNumPaginas = 0;

  struct livro
  {
    char titulo[10];
    int anoEdicao[10];
    int numeroPaginas;
    float preco;
  };

  struct livro Livros[5];

  for (int i = 0; i < 5; i++)
  {
    printf("Informacoes do %dº livro \n", i + 1);

    printf("Informe o titulo: ");
    scanf("%s", Livros[i].titulo);

    printf("Informe o ano: ");
    scanf("%d", &Livros[i].anoEdicao);

    printf("Informe o numero de paginas: ");
    scanf("%d", &Livros[i].numeroPaginas);

    printf("Informe o preco: ");
    scanf("%f", &Livros[i].preco);

    printf("\n");
  }

  for (int i = 0; i < 5; i++)
  {
    somaNumPaginas += Livros[i].numeroPaginas;
  }

  printf("\nMedia das paginas: %.2f\n", somaNumPaginas / 5);

  return 0;
}