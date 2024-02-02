#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

int *find_middle(int a[], int n);

int main(void) {
  int a[ARRAY_SIZE] = {11, 12, 13, 14, 15};

  printf("Middle element is %d\n", *find_middle(a, ARRAY_SIZE));

  return EXIT_SUCCESS;
}

int *find_middle(int a[], int n) {
  return a + (n / 2);
}
