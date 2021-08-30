#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Notas_Alunos{
  char nome[100][100];
  float nota[100];
};

int main() {
 struct Notas_Alunos aluno;
 char aux[100];
 int n;
 int i,j;
 int maior;
 float media = 0;
 float soma = 0;
 scanf("%d", &n);

 for(i = 0; i < n; i++){
   scanf("%s", &aluno.nome[i]);
   scanf("%f", &aluno.nota[i]);
  
   soma = soma + aluno.nota[i];
 }
 maior = aluno.nota[0];
 media = (float) soma/n;
    printf("NOTA MEDIA = %.1f\n", media);

  for (i=0; i<n; i++)
    {
        for (j=i; j<n-1; j++)
        {
            if (strcmp(aluno.nome[j], aluno.nome[j+1]) > 0)
            {
                strcpy(aux, aluno.nome[j]);
                strcpy(aluno.nome[j], aluno.nome[j+1]);
                strcpy(aluno.nome[j+1], aux);
            }
        }
    }

    for(i = 0; i < n; i++){
      if(maior <= aluno.nota[i]){
    printf("%s\t", aluno.nome[i]);
    printf("%.1f\n", aluno.nota[i]);
      }
    }



}