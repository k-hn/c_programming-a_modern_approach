#include <stdio.h>

void swap(int a, int b);

int main(void) {
  int i = 1, j = 2;

  swap(i, j);
  printf("i = %d, j = %d\n", i, j); /* Output: i = 1, j = 2 ; args are passed by value so aren't affected */

  return 0;
}

void swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}
