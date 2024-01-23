#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define ARRAY_COLS 10
#define ARRAY_ROWS 10

bool is_valid_position(char arr[ARRAY_ROWS][ARRAY_COLS], int row, int col) {
  bool is_unoccupied = arr[row][col] == '.';
  bool is_within_row_bounds = row >= 0 && row < ARRAY_ROWS;
  bool is_within_col_bounds = col >= 0 && col < ARRAY_COLS;
  bool is_within_bounds = is_within_row_bounds && is_within_col_bounds;

  return is_unoccupied && is_within_bounds;
}

bool is_blocked(char arr[ARRAY_ROWS][ARRAY_COLS], int row, int col) {
  bool has_valid_horizontal_move = is_valid_position(arr, row, col + 1) ||
    is_valid_position(arr, row, col - 1);
  bool has_valid_vertical_move = is_valid_position(arr, row + 1, col) ||
    is_valid_position(arr, row - 1, col);

  return !(has_valid_horizontal_move || has_valid_vertical_move);
}

int main(void) {
  char arr[ARRAY_ROWS][ARRAY_COLS];
  int current_row = 0;
  int current_col = 0;
  int retries = 0;

  for (int row = 0; row < ARRAY_ROWS; row++) {
    for (int col = 0; col < ARRAY_COLS; col++) {
      arr[row][col] = '.';
    }
  }

  /* Seed random number generator */
  srand((unsigned) time(NULL));
  
  arr[current_row][current_col] = 'A';
  for (int i = 'B'; i <= 'Z';) {
    int direction = rand() % 4;
    int next_row = current_row;
    int next_col = current_col;
    switch(direction) {
    case 0:
      next_col += 1;
      break;
    case 1:
      next_row += 1;
      break;
    case 2:
      next_col -= 1;
      break;
    case 3:
      next_row -= 1;
      break;
    }
    
    if (is_valid_position(arr, next_row, next_col)) {
      arr[next_row][next_col] = i;
      current_row = next_row;
      current_col = next_col;
      i++;
    } else if (is_blocked(arr, current_row, current_col)){
      break;      
    }
  }

  for (int row = 0; row < ARRAY_ROWS; row++) {
    for (int col = 0; col < ARRAY_COLS; col++) {
      printf("%c ", arr[row][col]);
    }
    printf("\n");
  }

  return EXIT_SUCCESS;
}
