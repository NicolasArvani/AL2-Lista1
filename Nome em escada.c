#include <stdio.h>
#include <string.h>

int main()
{
  char nome[50];
  int i, j;

  scanf("%[^\n]", nome); getchar();
  
  for(i = 0; i < strlen(nome); i++)
    if(nome[i] >= 97 && nome[i] <= 122)
      nome[i] -= 32;

  for(i = 0; i < strlen(nome); i++)
    {
      for(j = 0; j <= i; j++)
        printf("%c", nome[j]);
      printf("\n");
    }

  return 0;
}