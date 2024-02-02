#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

void find_two_largest(const int *a, int n, int *largest,
		      int *second_largest);

int main(void) {
  int largest, second_largest;
  int a[ARRAY_SIZE] = {11, 12, 13, 14, 15};
  
  find_two_largest(a, ARRAY_SIZE, &largest, &second_largest);

  printf("Largest: %d\nSecond largest: %d\n", largest, second_largest);

  return EXIT_SUCCESS;
}

void find_two_largest(const int *a, int n, int *largest,
		      int *second_largest) {
  /* init */
  const int *ptr = a;
  *largest = *ptr;
  *second_largest = *ptr;
  
  for (; ptr < a + n; ptr++) {
    if (*ptr > *second_largest && *ptr > *largest) {
      *largest = *ptr;
    }
  }

  for (ptr = a; ptr < a + n; ptr++) {
    if (*ptr > *second_largest && *ptr < *largest) {
      *second_largest = *ptr;
    }
  }
}

