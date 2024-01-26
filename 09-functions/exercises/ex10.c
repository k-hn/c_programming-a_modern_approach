#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

/* a */
int largest_element(int n, int a[n]) {
  int largest = a[0];

  for (int i = 1; i < n; i++) {
    if (a[i] > largest) {
      largest = a[i];
    }
  }

  return largest;
}

/* b */
int average(int n, int a[n]) {
  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += a[i];
  }

  return sum / n;
}

/* c */
int num_positives(int n, int a[n]) {
  int count = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
      count++;
    }
  }

  return count;
}

int main(void) {
  int a[ARRAY_SIZE] = {-21, 44, 99, 94, 6, 47, 14, 28, -29, 23};

  printf("Array: ");
  for (int i = 0; i < ARRAY_SIZE; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
  
  printf("Largest element: %d\n", largest_element(ARRAY_SIZE, a));
  printf("Average: %d\n", average(ARRAY_SIZE, a));
  printf("Number of positive elements: %d\n", num_positives(ARRAY_SIZE, a));
  return EXIT_SUCCESS;
}
