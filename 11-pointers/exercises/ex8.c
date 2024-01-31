#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int *find_largest(int a[], int n);

int main(void) {
  int nums[MAX_SIZE];

  printf("Enter %d numbers: ", MAX_SIZE);
  for (int i = 0; i < MAX_SIZE; i++) {
    scanf("%d", &nums[i]);    
  }
  
  printf("Largest number: %d\n", *(find_largest(nums, MAX_SIZE)));

  return EXIT_SUCCESS;
}

int *find_largest(int a[], int n) {
  int largest_index = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] > a[largest_index]) {
      largest_index = i;
    }
  }

  return &a[largest_index];
}
