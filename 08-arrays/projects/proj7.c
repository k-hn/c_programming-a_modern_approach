#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

int main(void) {
  int input_arr[ARRAY_SIZE][ARRAY_SIZE];

  /* Input loops */
  for (int i = 0; i < ARRAY_SIZE; i++) {
    printf("Enter row %d: ", i + 1);
    for (int j = 0; j < ARRAY_SIZE; j++) {
      scanf("%d", &input_arr[i][j]);
    }
  }

  printf("Row totals: ");
  for (int row = 0; row < ARRAY_SIZE; row++) {
    int row_sum = 0;
    for (int col = 0; col < ARRAY_SIZE; col++) {
      row_sum += input_arr[row][col];
    }
    printf(" %d", row_sum);
  }
  printf("\n");

  printf("Column totals: ");
  for (int col = 0; col < ARRAY_SIZE; col++) {
    int col_sum = 0;
    for (int row = 0; row < ARRAY_SIZE; row++) {
      col_sum += input_arr[row][col];
    }
    printf(" %d", col_sum);
  }
  printf("\n");
  
  return EXIT_SUCCESS;
}
