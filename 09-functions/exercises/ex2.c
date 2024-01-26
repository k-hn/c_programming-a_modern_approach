#include <stdio.h>
#include <stdlib.h>

int check(int x, int y, int n) {
  return x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1;
}

int main(void) {
  int n, x, y;

  printf("Check if x and y fall in the range 0 to (n - 1)\n");
  printf("Returns 1 is true, else 0\n");
  
  printf("Enter n: ");
  scanf("%d", &n);
  printf("Enter x: ");
  scanf("%d", &x);
  printf("Enter y: ");
  scanf("%d", &y);
  
  printf("Is in range: %d\n", check(x, y, n));
}
