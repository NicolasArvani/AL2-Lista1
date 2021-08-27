#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char p1[999], p2[999];
  int i, n, N, qtd=0, maior;

  scanf("%d", &n); getchar();

  for(N = 0; N < n; N++)
  {
    scanf("%s", p1); getchar();
    scanf("%s", p2); getchar();

    maior = strlen(p1);
    if(strlen(p2) > maior)
      maior = strlen(p2);

    for(i = 0; i < maior; i++)
    {
      if(p1[i] >= 65 && p1[i] <= 90)
        printf("%c", p1[i]);
      else
        printf("%c", p1[i]-32);
      
      if(p2[i] >= 65 && p2[i] <= 90)
        printf("%c", p2[i]+32);
      else
        printf("%c", p2[i]);
    }
    printf("\n");
  }

  return 0;
}