#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 20

void selection_sort(int array[], int len) {
  int temp;

  if (len <= 1) {
    return;
  }

  int current_position = 0;
  int intended_position = len - 1;

  /* find largest element in array */
  for (int i = 0; i < len; i++) {
    if (array[i] > array[current_position]) {
      current_position = i;
    }
  }

  if (current_position == intended_position) {
    return;
  } else {
    temp = array[current_position];
    array[current_position] = array[intended_position];
    array[intended_position] = temp;
  }

  selection_sort(array, len - 1);
}



int main(void) {
  int nums[ARRAY_SIZE] = {41, 8, 93,
			  58, 69, -60,
			  -28, -96, 67,
			  28, -23, -97,
			  -5, 81, -24,
			  9, -90, 94,
			  -8, -46};

  printf("Unsorted array: ");
  for (int i = 0; i < ARRAY_SIZE; i++) {
    printf("%d ", nums[i]);
  }
  printf("\n");

  selection_sort(nums, ARRAY_SIZE);

  printf("Sorted array: ");
  for (int i = 0; i < ARRAY_SIZE; i++) {
    printf("%d ", nums[i]);
  }
  printf("\n");

  return EXIT_SUCCESS;
}
