#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TEMPERATURE_ROWS 7
#define TEMPERATURE_COLS 24

void print_array_row(int a[TEMPERATURE_ROWS][TEMPERATURE_COLS], int row);

int main(void) {
  int temperatures[TEMPERATURE_ROWS][TEMPERATURE_COLS] = {{0, 12, 0, 32}}; 

  print_array_row(temperatures, 0);
  
  return EXIT_SUCCESS;
}

void print_array_row(int a[TEMPERATURE_ROWS][TEMPERATURE_COLS], int row) {
  for (int *ptr = &a[row][0]; ptr < &a[row][TEMPERATURE_COLS]; ptr++) {
    printf("%d ", *ptr);
  }
  printf("\n");
}
