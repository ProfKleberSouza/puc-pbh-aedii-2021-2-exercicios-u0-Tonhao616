#include <stdio.h>

int main() {
  int vet[100];
  int n;
  int i;
  int maior, menor;
  
  scanf("%d", &n);
  for(i = 0; i < n; i++){
  scanf("%d", &vet[i]);
  }
  menor = vet[0];
  maior = vet[1];
  for(i = 0; i < n; i++){
    if(maior<vet[i]){
      maior = vet[i];
    }else if (menor > vet[i]){
      menor = vet[i];
    }
  }
  printf("MAIOR = %d\n", maior);
  printf("MENOR = %d", menor);

}