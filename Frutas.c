#include <stdio.h>
#include <string.h>

int main()
{
  int i, j, n, N, dia=0, qtd;
  double v=0, x, kg=0;
  char frutas[999];

  scanf("%d", &N); getchar();
  for(n = 0; n < N; n++)
  {
    dia++; qtd=1;
    scanf("%lf", &x); getchar();
    v += x;
    scanf("%[^\n]", frutas); getchar();
    for(i = 0; i < strlen(frutas); i++)
      if(frutas[i-1] == ' ' && frutas[i] != ' ')
        qtd++;
    kg += qtd;
    printf("dia %d: %d kg\n", dia, qtd);
  }

  kg /= dia;
  v /= dia;
  
  printf("%.2lf kg por dia\n", kg);
  printf("R$ %.2lf por dia\n", v);

  return 0;
}