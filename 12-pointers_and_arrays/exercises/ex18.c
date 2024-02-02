#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define BOARD_SIZE 8

int get_piece_value(char piece);
int evaluate_position(char board[BOARD_SIZE][BOARD_SIZE]);

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

  printf("Evaluates pieces on a board and returns a value.\n");
  printf("Positive for White advantange, negative otherwise.\n");

  for (int i = 0; i < BOARD_SIZE; i++) {
    for (int j = 0; j < BOARD_SIZE; j++) {
      printf("%c", chess_board[i][j]);
    }
    printf("\n");
  }
  
  printf("Evaluation: %d\n", evaluate_position(chess_board));

  return EXIT_SUCCESS;
}

int get_piece_value(char piece) {
  switch(toupper(piece)) {
  case 'Q':
    return 9;
  case 'R':
    return 5;
  case 'B':
    return 3;
  case 'N':
    return 3;
  case 'P':
    return 1;
  default:
    return 0;
  }
}

int evaluate_position(char board[BOARD_SIZE][BOARD_SIZE]) {
  int white_score = 0;
  int black_score = 0;
  
  for (char *ptr = *board; ptr < *board + (BOARD_SIZE * BOARD_SIZE); ptr++) {
    if (islower(*ptr)) {
      black_score += get_piece_value(*ptr);
    } else {
      white_score += get_piece_value(*ptr);
    }
  }
  
  return white_score - black_score;
}
