#include <stdio.h>
#include <stdlib.h>

#define NUM_OF_SEGMENTS 7
#define NUM_OF_DIGITS 10

void print_digit(const int segment_arr[]) {
  printf(" %c \n", segment_arr[0] ? '-' : ' ');
  printf("%c %c\n", segment_arr[5] ? '|' : ' ', segment_arr[1] ? '|' : ' ');
  printf(" %c \n", segment_arr[6] ? '-' : ' ');
  printf("%c %c\n", segment_arr[4] ? '|' : ' ', segment_arr[2] ? '|' : ' ');
  printf(" %c \n", segment_arr[3] ? '-' : ' ');
}

int main(void) {
  int n;  
  const int segments[NUM_OF_DIGITS][NUM_OF_SEGMENTS] = {
      {1, 1, 1, 1, 1, 1, 0},
      {0, 1, 1, 0, 0, 0, 0},
      {1, 1, 0, 1, 1, 0, 1},
      {1, 1, 1, 1, 0, 0, 1},
      {0, 1, 1, 0, 0, 1, 1},
      {1, 0, 1, 1, 0, 1, 1},
      {1, 0, 1, 1, 1, 1, 1},
      {1, 1, 1, 0, 0, 0, 0},
      {1, 1, 1, 1, 1, 1, 1},
      {1, 1, 1, 1, 0, 1, 1}
  };

  printf("Enter a digit to print: ");
  scanf("%1d", &n);
  print_digit(segments[n]);
  
  return EXIT_SUCCESS;
}
