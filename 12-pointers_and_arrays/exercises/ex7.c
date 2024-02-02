#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

int main(void) {
  int a[5] = {11, 12, 13, 14, 15};
  int search_term = 20;

  if (search(a, 5, search_term)) {
    printf("Search term %d exists in array\n", search_term);
  } else {
    printf("Search term %d does not exist in array\n", search_term);
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
