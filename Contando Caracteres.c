#include <stdio.h>
#include <string.h>


int main()
{
  int n = 0, i, j, k, qtd, qtdp;
  char p[999][101], mp[101]; 
  mp[0] = '\0';

  scanf("%[^\n]", p[n]); getchar();
  while(strcmp(p[n], "0") != 0)
  {
    qtdp = 0; qtd = 0;
    for(i = 0; i < strlen(p[n]); i++)
    {
      if(p[n][i] != ' ')
      {
        qtd++;
      }
      if(p[n][i] == ' ' || i == strlen(p[n]) - 1)
      {
        if(i == strlen(p[n]) - 1)
          i++;
        if(qtd > 0)
        {
          if(qtdp > 0)
            printf("-");
          printf("%d", qtd);
          qtdp++;
        }
        
        if(qtd >= strlen(mp))
        {
          for(j = i - qtd, k = 0; j < i; j++, k++)
          {
            mp[k] = p[n][j];
          }
          mp[k] = '\0';
        }
        qtd = 0;
      }
    }
    printf("\n");

    scanf("%[^\n]", p[n]); getchar();
  }

  printf("Maior palavra: %s\n", mp);


  return 0;
}