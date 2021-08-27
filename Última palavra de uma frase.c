#include <stdio.h>
#include <string.h>

int main()
{
  char frase[401];
  int i, n=-1;

  scanf("%[^\n]", frase); getchar();

  for(i = 0; i < strlen(frase); i++)
    if(frase[i] == ' ')
      n = i;

  for(i = n+1; i < strlen(frase); i++)
    printf("%c", frase[i]);
  printf("\n");

  return 0;
}