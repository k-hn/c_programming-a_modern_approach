#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TEMPERATURE_ROWS 7
#define TEMPERATURE_COLS 24

bool search(const int a[], int n, int key);
int find_largest(int a[], int n);

int main(void) {
  int temperatures[TEMPERATURE_ROWS][TEMPERATURE_COLS] = {
    {0, 12, 0, 32},
      {5}}; 

  for (int i = 0; i < TEMPERATURE_ROWS; i++) {
    printf("Day %d: %d\n", i + 1, find_largest(&temperatures[i][0], TEMPERATURE_COLS));
  }
  
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
