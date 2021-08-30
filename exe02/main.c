#include <stdio.h>

int main() {
  int T, R, V;
  int D, L;
   scanf("%d %d %d", &T, &V, &R);
  D = T*V;
  L = D/R;

  printf("R = %d\n", R);
  printf("V = %d\n", V);
  printf("T = %d\n", T);
  printf("D = %d\n", D);
  printf("L = %d\n", L);

}