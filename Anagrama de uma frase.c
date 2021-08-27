#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  char frase1[999];
  char frase2[999];
}frases;

int main()
{
  int i, alf[127]={0}, f=0;
  
  frases anagrama;

  scanf("%[^\n]", anagrama.frase1); getchar();
  scanf("%[^\n]", anagrama.frase2); getchar();

  for(i = 0; i < strlen(anagrama.frase1); i++)
  {
    if((anagrama.frase1[i] >= 97) && (anagrama.frase1[i] <= 122))
      alf[anagrama.frase1[i]-32]++;
    else
      alf[anagrama.frase1[i]]++;
  }

  
  for(i = 0; i < strlen(anagrama.frase2); i++)
  {
    if((anagrama.frase2[i] >= 97) && (anagrama.frase2[i] <= 122))
      alf[anagrama.frase2[i]-32]--;
    else
      alf[anagrama.frase2[i]]--;
  }
  for(i = 0; i < 127; i++)
  {
    if((i != 46) && (i != 44) && (i != 63) && (i != 33) && (i != 32) && (i > 32))
      if(alf[i] != 0)
      {
        f=1; 
        // printf("%d\n", i);
      }
  }
  
  if(f == 1)
    printf("False\n");
  else
    printf("True\n");  

  return 0;
}