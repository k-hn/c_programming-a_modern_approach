#include <stdio.h>
#include <stdlib.h>

#define ROWS 5
#define COLS 5

int sum_two_dimensional_array(const int a[][COLS], int n);
int main(void) {
  int a[ROWS][COLS] = {
    {1, 2, 5},
    {4, 1},
    {0},
    {0},
    {0, 0, 0, 0, 1}
  };

  printf("Sum of 2d array: %d\n", sum_two_dimensional_array(a, COLS));

  return EXIT_SUCCESS;
}

int sum_two_dimensional_array(const int a[][COLS], int n)
{
  int sum = 0;

  for (const int *ptr = *a; ptr < *a + (n * COLS); ptr++) {
    sum += *ptr;
  }
  
  return sum;
}
