#include <stdio.h>

int main() {

    int a, b, c, d;
    float media;

  scanf("%d %d %d %d", &a, &b, &c, &d);

  media  = ((float) a + (float) b + (float) c + (float) d)/4;

  printf("NOTA = %.1f", media);

  if(media >= 6){
    printf(" (APROVADO)");
  }else{
    printf(" (REPROVADO)");
  }

}