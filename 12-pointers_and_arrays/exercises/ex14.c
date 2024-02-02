#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TEMPERATURE_ROWS 7
#define TEMPERATURE_COLS 24

bool search(const int a[], int n, int key);

int main(void) {
  int temperatures[TEMPERATURE_ROWS][TEMPERATURE_COLS] = {{0, 12, 0, 32}}; 
  int search_term = 12;

  if (search(&temperatures[0][0], TEMPERATURE_ROWS * TEMPERATURE_COLS, search_term)) {
    printf("Temperature found.\n");
      } else {
    printf("Temperature not found.\n");
  }
  
  return EXIT_SUCCESS;
}

bool search(const int a[], int n, int key) {
  const int *ptr;
  for (ptr = a; ptr < a + n; ptr++) {
    if (key == *ptr) {
      return true;
    }
  }

  return false;
}
