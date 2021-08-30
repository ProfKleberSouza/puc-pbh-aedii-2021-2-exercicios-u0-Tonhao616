#include <stdio.h>

int main() {
  int numero;
  scanf("%d", &numero);

  if(numero % 2 == 0){
    printf("Numero Par ");
  }else{
    printf("Numero Impar ");
  }
  if(numero > 0){
    printf("POSITIVO");
  }else{
    printf("IMPAR");
  }
}