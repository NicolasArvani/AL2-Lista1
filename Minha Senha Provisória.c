#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int i, t, f=0;
  int n, N;
  char ra[101];

  scanf("%d", &N); getchar();

  for(n = 0; n < N; n++)
  {
    f=0;
    scanf("%s", ra);
    if(ra[0] != 'R' || ra[1] != 'A' || strlen(ra) != 20)
      f=1;
    if(f == 1)
      printf("INVALID DATA\n");
    else
    {
      for(i = 2; i < strlen(ra); i++)
        if(ra[i] != '0')
        {
          t = i;
          break;
        }
      for(i = t; i < strlen(ra); i++)
        printf("%c", ra[i]);
      printf("\n");
    } 
  }

  return 0;
}