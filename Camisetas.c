#include <stdio.h>
#include <string.h>

typedef struct
{
  char nome[99];
  char cor[99];
  char tamanho;
}camisetas;

int main()
{
  camisetas polo[60], aux;
  int i, j, n, N, dia=0, qtd, l;

  scanf("%d", &N); getchar();
  while(N != 0)
  {
    for(n = 0; n < N; n++)
    {
      scanf("%[^\n]", polo[n].nome); getchar();
      scanf("%s %c", polo[n].cor, &polo[n].tamanho); getchar();
    }

    //ordenando as cores
    for(i = 0; i < N-1; i++)
      for(j = i+1; j < N; j++)
      {
        l=0;
        while(1)
        {
          if(strcmp(polo[i].cor, polo[j].cor) == 0)
            break;
          if(polo[i].cor[l] == polo[j].cor[l])
            l++;
          if(polo[i].cor[l] > polo[j].cor[l])
          {
            aux = polo[i];
            polo[i] = polo[j];
            polo[j] = aux;
          }
          if(polo[i].cor[l] < polo[j].cor[l])
            break;
          if(l == strlen(polo[i].cor))
            break;
        }
      }

    //ordenando pelo tamanho
    for(i = 0; i < N-1; i++)
      for(j = i+1; j < N; j++)
        if(strcmp(polo[i].cor, polo[j].cor) == 0)
          if(polo[i].tamanho < polo[j].tamanho)
          {
            aux = polo[i];
            polo[i] = polo[j];
            polo[j] = aux;
          }
    
      
      for(i = 0; i < N-1; i++)
        for(j = i+1; j < N; j++)
        {
          if((strcmp(polo[i].cor, polo[j].cor) == 0) && (polo[i].tamanho == polo[j].tamanho))
          {
            l=0;
            while(1)
            {
              if(polo[i].nome[l] == polo[j].nome[l])
                l++;
              if(polo[i].nome[l] > polo[j].nome[l])
              {
                aux = polo[i];
                polo[i] = polo[j];
                polo[j] = aux;
              }
              if(polo[i].nome[l] < polo[j].nome[l])
                break;
              if(l == strlen(polo[i].nome))
                break;
            }
          }
        }
        
    for(n = 0; n < N; n++)
      printf("%s %c %s\n", polo[n].cor, polo[n].tamanho, polo[n].nome);
    printf("\n");
    scanf("%d", &N); getchar();
  }

  return 0;
}