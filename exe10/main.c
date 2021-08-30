#include <stdio.h>

int main() {
  int vet[10];
  int i;
  for(i = 0; i < 10; i++){
  scanf("%d", &vet[i]);
  }

  for(i = 9; i >= 0; i--){
    printf("%d\n", vet[i]);
  }
}