#include <stdio.h>
#include <stdlib.h>

#define BOARD_SIZE 8

int main(void) {
  char checker_board[BOARD_SIZE][BOARD_SIZE];

  for(int i = 0; i < BOARD_SIZE; i++) {
    for (int j = 0; j < BOARD_SIZE; j++) {
      checker_board[i][j] = (i + j) % 2 == 0 ? 'B' : 'R';
    }
  }

  for(int i = 0; i < BOARD_SIZE; i++) {
    for (int j = 0; j < BOARD_SIZE; j++) {
      printf("%c ", checker_board[i][j]);
    }
    printf("\n");
  }

  return EXIT_SUCCESS;
}
