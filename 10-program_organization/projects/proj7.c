#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* defines */
#define MAX_DIGITS 10
#define NUM_OF_DIGITS 10
#define NUM_OF_SEGMENTS 7

#define DIGITS_ROWS 5
#define DIGITS_COLUMNS (MAX_DIGITS * 4)

/* external variables */
int segments[NUM_OF_DIGITS][5][3] = {
  /* 0 */
  {{0, 1, 0},
   {1, 0, 1},
   {0, 0, 0},
   {1, 0, 1},
   {0, 1, 0}},
  /* 1 */
  {{0, 0, 0},
   {0, 0, 1},
   {0, 0, 0},
   {0, 0, 1},
   {0, 0, 0}},
  /* 2 */
  {{0, 1, 0},
   {0, 0, 1},
   {0, 1, 0},
   {1, 0, 0},
   {0, 1, 0}},
  /* 3 */
  {{0, 1, 0},
   {0, 0, 1},
   {0, 1, 0},
   {0, 0, 1},
   {0, 1, 0}},
  /* 4 */
  {{0, 0, 0},
   {1, 0, 1},
   {0, 1, 0},
   {0, 0, 1},
   {0, 0, 0}},
  /* 5 */
  {{0, 1, 0},
   {1, 0, 0},
   {0, 1, 0},
   {0, 0, 1},
   {0, 1, 0}},
  /* 6 */
  {{0, 1, 0},
   {1, 0, 0},
   {0, 1, 0},
   {1, 0, 1},
   {0, 1, 0}},
  /* 7 */
  {{0, 1, 0},
   {0, 0, 1},
   {0, 0, 0},
   {0, 0, 1},
   {0, 0, 0}},
  /* 8 */
  {{0, 1, 0},
   {1, 0, 1},
   {0, 1, 0},
   {1, 0, 1},
   {0, 1, 0}},
  /* 9 */
  {{0, 1, 0},
   {1, 0, 1},
   {0, 1, 0},
   {0, 0, 1},
   {0, 1, 0}}
};

char digits[DIGITS_ROWS][DIGITS_COLUMNS];

/* prototypes */
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void) {
  char input_char;
  int pos = 0;
  
  clear_digits_array();
  printf("Enter a number: ");
  do {
    scanf("%c", &input_char);
    
    if (isdigit(input_char)) {
      process_digit(input_char - '0', pos * 4);
      pos++;
    }
  } while (input_char != '\n');
  
  print_digits_array();

  return EXIT_SUCCESS;
}

void clear_digits_array(void) {
  for (int row = 0; row < DIGITS_ROWS; row++) {
    for (int col = 0; col < DIGITS_COLUMNS; col++) {
      digits[row][col] = ' ';
    }
  }
}

void process_digit(int digit, int position) {
  char segment_char;
  
  for (int row = 0; row < 5; row++) {
    for (int col = position; col < position + 3; col++) {
      segment_char = row % 2 == 0 ? '-' : '|';
      digits[row][col] = segments[digit][row][col - position] ? segment_char : ' ';
    }
  }
}

void print_digits_array(void) {
  for (int row = 0; row < DIGITS_ROWS; row++) {
    for (int col = 0; col < DIGITS_COLUMNS; col++) {
      printf("%c", digits[row][col]);
    }
    printf("\n");
  }
}
