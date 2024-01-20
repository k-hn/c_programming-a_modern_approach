/* Demonstrate using a digit(in character form) as an array subscript */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char subscript = '4';
  int array[] = {11, 12, 13, 14, 15, 16};

  printf("Subscript '%c' of array is: %d\n", subscript, array[subscript - '0']);

  return EXIT_SUCCESS;
}
