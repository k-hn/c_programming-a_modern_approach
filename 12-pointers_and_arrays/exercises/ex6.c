#include <stdio.h>
#include <stdlib.h>

int sum_array(const int a[], int n);

int main(void) {
  int a[5] = {11, 12, 13, 14, 15};

  printf("Sum of array: %d\n", sum_array(a, 5));
  
  return EXIT_SUCCESS;
}

int sum_array(const int a[], int n)
{
  const int *ptr;
  int sum;
  sum = 0;
  
  for (ptr = a; ptr < a + n; ptr++)
    sum += *ptr;
  return sum;
}
