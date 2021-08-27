#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  char nome[99];
  char matricula[99];
  double ab1;
  double ab2;
  double media;
}dados_aluno;

int main()
{
  int i;
  char x[99];
  dados_aluno aluno;

  for(i = 0; i < 4; i++)
  {
    scanf("%s", x);
    if(strcmp(x, "nome") == 0)
    {
      scanf("%[^\n]", aluno.nome); getchar();
    } 
    if(strcmp(x, "matricula") == 0)
    {
      scanf("%[^\n]", aluno.nome); getchar();
    } 
    if(strcmp(x, "ab1") == 0)
      scanf("%lf", &aluno.ab1);
    if(strcmp(x, "ab2") == 0)
      scanf("%lf", &aluno.ab2);
  }

  aluno.media = (aluno.ab1 + aluno.ab2) / 2;

  printf("%.2lf\n", aluno.media);

  

  return 0;
}