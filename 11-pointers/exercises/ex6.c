#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void) {
  int nums[MAX_SIZE];
  int largest;
  int second_largest;

  printf("Enter ten numbers: ");
  for (int i = 0; i < MAX_SIZE; i++) {
    scanf("%d", &nums[i]);
  }

  printf("\nNumbers entered: ");
  for (int i = 0; i < MAX_SIZE; i++) {
    printf("%d ", nums[i]);
  }
  printf("\n");
  
  find_two_largest(nums, MAX_SIZE, &largest, &second_largest);

  printf("Largest: %d\nSecond largest: %d\n", largest, second_largest);
  
  return EXIT_SUCCESS;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest) {
  *largest = a[0];
  *second_largest = a[0];
  
  for (int i = 0; i < n; i++) {
    if (a[i] > *second_largest && a[i] > *largest) {
      *largest = a[i];
    } else if (a[i] > *second_largest && a[i] < *largest) {
      *second_largest = a[i];
    }
  }
}

