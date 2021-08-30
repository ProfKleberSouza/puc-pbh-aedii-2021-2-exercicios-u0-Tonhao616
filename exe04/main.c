#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  if(a < b && a < c){
    printf("MENOR = %d\n", a);
  }else if(b < a && b < c){
    printf("MENOR = %d\n", b);
  }else if(c < b && c < a){
    printf("MENOR = %d\n", c);
  }

  if(a > b && a > c){
    printf("MAIOR = %d\n", a);
  }else if(b > a && b > c){
    printf("MAIOR = %d\n", b);
  }else if(c > b && c > a){
    printf("MAIOR = %d\n", c);
  }
  
}