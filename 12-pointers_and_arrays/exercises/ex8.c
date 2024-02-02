#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

void store_zeros(int a[], int n);
void print_array(int a[], int n);

int main(void) {
  int a[ARRAY_SIZE] = {11, 12, 13, 14, 15};

  printf("Array before: ");
  print_array(a, ARRAY_SIZE);

  store_zeros(a, ARRAY_SIZE);
  
  printf("Array after: ");
  print_array(a, ARRAY_SIZE);
  
  return EXIT_SUCCESS;
}

void print_array(int a[], int n) {
  int *ptr = a;
  for (int *ptr = a; ptr < a + n; ptr++) {
    printf("%d ", *ptr);
  }
  printf("\n");
}

void store_zeros(int a[], int n) {
  int *ptr = a;
  for (int *ptr = a; ptr < a + n; ptr++) {
    *ptr = 0;
  }
}
