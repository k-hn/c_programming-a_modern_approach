#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int input, first_digit;

  printf("Enter a numerical grade: ");
  scanf("%d", &input);

  if (input < 0 || input > 100) {
    printf("input is outside the range 0 - 100.\n");
    return EXIT_SUCCESS;
  }
  
  first_digit = input / 10;
  printf("Letter grade: ");
  switch(first_digit) {
  case 10:
  case 9:
    printf("A\n");
    break;
  case 8:
    printf("B\n");
    break;
  case 7:
    printf("C\n");
    break;
  case 6:
    printf("D\n");
    break;
  default:
    printf("F\n");
    break;
  }
  
  return EXIT_SUCCESS;
}
