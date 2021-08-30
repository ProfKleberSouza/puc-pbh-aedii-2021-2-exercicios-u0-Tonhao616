#include <stdio.h>

int main() {
   int x, y, z;

   scanf("%d %d %d", &x, &y, &z);

  if(x == y && x == z && y == z){
   printf("TRIANGULO EQUILATERO");
  }else if(x == y && x == z && z != y || y == x && y == z && y != x || z == y && z == x && x != z){
   printf("TRIANGULO ISOCELES");
  }else if(x != y && x != z && y != z){
   printf("TRIANGULO ESCALENO");
}
}