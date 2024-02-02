#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

int find_largest(int a[], int n);

int main(void) {
  int a[ARRAY_SIZE] = {11, 12, 131, 14, 15};

  printf("Largest number: %d\n", find_largest(a, ARRAY_SIZE));

  return EXIT_SUCCESS;
}

int find_largest(int a[], int n)
{
  int *ptr = a;
  int max = *ptr;

  for (; ptr < a + n; ptr++) {
    if (*ptr > max) {
      max = *ptr;
    }
  }
  
  return max;
}
