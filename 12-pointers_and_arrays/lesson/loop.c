#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(void) {
  int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};;
  int sum, *p;

  sum = 0;

  for (p = &a[0]; p < &a[N]; p++) {
    sum += *p;
  }

  printf("Sum of { ");
  for (int i = 0; i < N; i++) {
    printf("%d ", a[i]);
  }
  printf("} = %d\n", sum);

  return EXIT_SUCCESS;
}
