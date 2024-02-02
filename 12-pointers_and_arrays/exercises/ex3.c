/* The code snippet below reverses the array */
/* This is done by starting from the extreme ends and swapping the values */
/* After each swap, the pointers move inwards */
/* Swap stops when the pointers meet in the middle */

#include <stdio.h>
#include <stdlib.h>

#define N 10

void print_array(int a[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(void) {
  int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *p = &a[0];
  int *q = &a[N - 1];
  int temp;

  printf("Array before reversal: ");
  print_array(a, N);
  
  while (p < q) {
    temp = *p;
    *p++ = *q;
    *q-- = temp;
  }

  printf("Array after reversal: ");
  print_array(a, N);

  return EXIT_SUCCESS;
}
