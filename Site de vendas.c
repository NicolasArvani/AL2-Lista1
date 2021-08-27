#include <stdio.h>
#include <string.h>

typedef struct
{
  char nome[150];
  int qtd;
  double valor;
  char cidade[150];
}info_cliente;

int main()
{
  info_cliente clientes[10];
  int i, j, N=0, n, qtd_total=0, mvi;
  double v_total=0, mv;

  scanf("%[^\n]", clientes[N].nome); getchar();
  while((N < 10) && (strcmp(clientes[N].nome, "encerrar") != 0))
  {
    scanf("%d", &clientes[N].qtd); getchar();
    scanf("%lf", &clientes[N].valor); getchar();
    scanf("%[^\n]", clientes[N].cidade); getchar();
    N++;
    if(N == 10) break;
    scanf("%[^\n]", clientes[N].nome); getchar();
  }

  for(i = 0; i < N-1; i++)
    for(j= i+1; j < N; j++)
      if(strcmp(clientes[i].nome, clientes[j].nome) == 0)
      {
        clientes[i].valor += clientes[j].valor;
        clientes[j].valor = 0;
        clientes[i].qtd += clientes[j].qtd;
        clientes[j].qtd = 0;
      }


  for(i = 0; i < N; i++)
  {
    v_total += clientes[i].valor;
    qtd_total += clientes[i].qtd;
    if(i == 0 || mv < clientes[i].valor)
    {
      mv = clientes[i].valor;
      mvi = i;
    }
  }


  printf("Quantidade vendida: %d\n", qtd_total);
  printf("Valor arrecadado: %.2lf\n", v_total);
  printf("%s\n", clientes[mvi].nome);
  printf("%s\n", clientes[mvi].cidade);

  return 0;
}