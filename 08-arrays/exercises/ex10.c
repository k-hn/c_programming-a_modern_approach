#include <stdio.h>
#include <stdlib.h>

#define BOARD_SIZE 8

int main(void) {
  char chess_board[BOARD_SIZE][BOARD_SIZE] = {
    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
    {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
    {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
    {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
    {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
  };


  for (int i = 0; i < BOARD_SIZE; i++) {
    for (int j = 0; j < BOARD_SIZE; j++) {
      printf("%c ", chess_board[i][j]);
    }
    printf("\n");
  }
  
  return EXIT_SUCCESS;
}
